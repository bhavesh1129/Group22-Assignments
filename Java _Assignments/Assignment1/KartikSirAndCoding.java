package assignments.assignment1;

import java.util.Scanner;
import java.util.Stack;

public class KartikSirAndCoding {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        Stack<Integer> st = new Stack<>();
        while (t-- > 0) {
            int quertyType = sc.nextInt();

            if (quertyType == 2) {//push
                st.push(sc.nextInt());
            } else {//pop and print
                if (!st.isEmpty()) {
                    int temp = st.pop();
                    System.out.println(temp);
                } else {
                    System.out.println("No Code");
                }
            }
        }
    }
}
