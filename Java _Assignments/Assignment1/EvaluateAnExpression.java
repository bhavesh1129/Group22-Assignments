package assignments.assignment1;

import java.util.*;

public class EvaluateAnExpression {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String str = sc.next();
            System.out.println(evaluate(str));
        }
    }

    private static int evaluate(String str) {
        Stack<Integer> operands = new Stack<>();
        Stack<Character> operator = new Stack<>();
        char[] arr = str.toCharArray();

        for (char ch : arr) {
            if (Character.isDigit(ch)) {
                operands.push(ch - '0');
            } else {
                operator.push(ch);
                if (operands.size() >= 2) {
                    int res = checkOperator(operator.pop(), operands);
                    operands.push(res);
                }
            }
        }
        return operands.pop();
    }

    private static int checkOperator(char ch, Stack<Integer> operands) {
        int second = operands.pop();
        int first = operands.pop();

        if (ch == '+') {
            return (first + second);
        } else if (ch == '-') {
            return (first - second);
        } else if (ch == '*') {
            return (first * second);
        } else {
            return (first / second);
        }
    }
}
