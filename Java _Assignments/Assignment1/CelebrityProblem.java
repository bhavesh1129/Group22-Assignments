package assignments.assignment1;

import java.io.*;
import java.util.*;

public class CelebrityProblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] arr = new int[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        findCelebrity(arr);
    }

    private static void findCelebrity(int[][] arr) {
        Stack<Integer> st = new Stack<>();
        for (int i = 0; i < arr.length; i++) {
            st.push(i);
        }
        while (st.size() != 1) {
            int banda1 = st.pop();
            int banda2 = st.pop();

            if (arr[banda1][banda2] == 1) {
                st.push(banda2);
            } else {
                st.push(banda1);
            }
        }

        int potentialCeleb = st.pop();
        for (int c = 0; c < arr.length; c++) {
            if (arr[potentialCeleb][c] == 1) {
                System.out.println("No celebrity!");
                return;
            }
        }
        for (int r = 0; r < arr.length; r++) {
            if (r != potentialCeleb && arr[r][potentialCeleb] == 0) {
                System.out.println("No celebrity!");
                return;
            }
        }
        System.out.println(potentialCeleb);
    }
}
