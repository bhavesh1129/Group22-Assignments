package assignments.assignment1;

import java.util.*;

public class Histogram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] ht = new int[n];
        for (int i = 0; i < ht.length; i++) {
            ht[i] = sc.nextInt();
        }
        histogram(ht);
    }

    private static void histogram(int[] ht) {
        //NSE
        Stack<Integer> st1 = new Stack<>();
        int[] nse = new int[ht.length];
        st1.push(0);
        for (int i = 0; i < ht.length; i++) {
            while (!st1.isEmpty() && ht[st1.peek()] > ht[i]) {
                nse[st1.pop()] = i;
            }
            st1.push(i);
        }
        while (!st1.isEmpty()) {
            nse[st1.pop()] = ht.length;
        }

        //PSE
        Stack<Integer> st = new Stack<>();
        st.push(0);
        int[] pse = new int[ht.length];
        pse[0] = -1;

        for (int i = 1; i < ht.length; i++) {
            while (!st.isEmpty() && ht[st.peek()] >= ht[i]) {
                st.pop();
            }
            if (!st.isEmpty()) {
                pse[i] = st.peek();
            } else {
                pse[i] = -1;
            }
            st.push(i);
        }

        int maxArea = Integer.MIN_VALUE;
        for (int i = 0; i < ht.length; i++) {
            int area = ht[i] * (nse[i] - pse[i] - 1);
            maxArea = Math.max(area, maxArea);
        }
        System.out.println(maxArea);
    }
}
