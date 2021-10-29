package assignments.assignment1;

import java.io.*;
import java.util.*;

public class CelebrityProblem {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[][] arr = new int[n][n];

        for (int i = 0; i < n; i++) {
            String line = br.readLine();
            for (int j = 0; j < n; j++) {
                arr[i][j] = line.charAt(j) - '0';
            }
        }

        findCelebrity(arr);
    }

    private static void findCelebrity(int[][] arr) {
        Stack<Integer> st = new Stack<>();
        for (int i = 0; i < arr.length; i++) {
            st.push(i);
        }
        while (st.size() >= 2) {
            int i = st.pop();
            int j = st.pop();

            if (arr[i][j] == 1) {
                //i isn't celebrity
                st.push(j);
            } else {
                //j isn't celebrity
                st.push(i);
            }
        }
        int res = st.pop();
        for (int i = 0; i < arr.length; i++) {
            if (i == res) {
                if (arr[i][res] == 0 || arr[res][i] == 1) {
                    System.out.println("No Celebrity");
                    return;
                }
            }
        }
        System.out.println(res);
    }
}
