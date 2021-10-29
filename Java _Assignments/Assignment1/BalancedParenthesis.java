package assignments.assignment1;

import java.util.*;

public class BalancedParenthesis {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.println(balancedParenthesis(str));
    }

    private static String balancedParenthesis(String str) {
        Stack<Character> st = new Stack<>();
        for (char ch : str.toCharArray()) {
            if (ch == '(') {
                st.push(')');
            } else if (ch == '[') {
                st.push(']');
            } else if (ch == '{') {
                st.push('}');
            } else if (st.peek() == ch) {
                st.pop();
            }
        }
        return st.isEmpty() == true ? "Yes" : "No";
    }
}
