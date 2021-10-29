package assignments.assignment1;

import java.util.*;

public class StockSpan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] ht = new int[n];
        for (int i = 0; i < ht.length; i++) {
            ht[i] = sc.nextInt();
        }
        stockSpanStack(ht);
    }

    private static void stockSpanStack(int[] ht) {
        Stack<Integer> st = new Stack<>();
        int[] span = new int[ht.length];
        span[0] = 1;
        st.push(0);
        for (int curr = 1; curr < ht.length; curr++) {
            while (!st.isEmpty() && ht[st.peek()] < ht[curr]) {
                st.pop();
            }
            span[curr] = st.isEmpty() ? curr + 1 : curr - st.peek();
            st.push(curr);
        }
        for (int i : span) {
            System.out.print(i + " ");
        }
        System.out.print("END");
    }
}
