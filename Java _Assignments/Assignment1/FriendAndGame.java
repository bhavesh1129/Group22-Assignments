package assignments.assignment1;

import java.util.Scanner;
import java.util.Stack;

public class FriendAndGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String str = sc.next();
            friendAndGame(str);
        }
    }

    private static void friendAndGame(String str) {
        Stack<Integer> st = new Stack<>();
        String ans = "";
        for (int i = 0; i <= str.length(); i++) {
            st.push(i + 1);
            char ch = 'D';
            if (i < str.length() && (str.charAt(i) - '0') % 2 == 0) {
                ch = 'I';
            }
            if (i == str.length() || ch == 'I') {
                while (!st.isEmpty()) {
                    ans += st.pop();
                }
            }
        }
        System.out.println(ans);
    }
}
