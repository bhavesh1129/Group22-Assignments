package assignments.assignment1;

import java.util.*;

public class ReverseStackUsingRecursion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Stack<Integer> st = new Stack<>();
        for (int i = 0; i < n; i++) {
            st.push(sc.nextInt());
        }
        reverseStack(st);
        for (int i = 0; i < n; i++) {
            System.out.println(st.pop());
        }
    }

    private static Stack<Integer> reverseStack(Stack<Integer> st) {
        if (st.size() == 1) {
            return st;
        }
        int temp = st.pop();
        reverseStack(st);
        insert(st, temp);
        return st;
    }

    private static void insert(Stack<Integer> st, int elm) {
        if (st.isEmpty()) {
            st.push(elm);
            return;
        }
        int temp = st.pop();
        insert(st, elm);
        st.push(temp);
    }
}
