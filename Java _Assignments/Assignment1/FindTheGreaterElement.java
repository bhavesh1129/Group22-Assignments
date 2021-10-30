package assignments.assignment1;

import java.util.*;

public class FindTheGreaterElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] ht = new int[n];
        for (int i = 0; i < ht.length; i++) {
            ht[i] = sc.nextInt();
        }
        nextGreater(ht);
    }

    private static void nextGreater(int[] ht) {
        Stack<Integer> st = new Stack<>();
        int[] nge = new int[ht.length];
        st.push(0);
        for (int i = 0; i < ht.length; i++) {
            while (!st.isEmpty() && ht[st.peek()] < ht[i]) {
                nge[st.pop()] = ht[i];
            }
            st.push(i);
        }
        while (!st.isEmpty()) {
            nge[st.pop()] = -1;
        }
        for (int i = 0; i < nge.length; i++) {
            System.out.print(nge[i] + " ");
        }
    }
}