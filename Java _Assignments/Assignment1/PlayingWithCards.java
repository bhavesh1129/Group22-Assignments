package assignments.assignment1;

import java.util.*;

public class PlayingWithCards {
    static final int MAX = 1300000;
    static boolean[] sieve = new boolean[MAX];
    static ArrayList<Integer> primes = new ArrayList<>();

    static void createSieve() {
        for (int i = 0; i < MAX; i++) {
            sieve[i] = true;
        }
        sieve[0] = sieve[1] = false;
        for (int i = 2; i < MAX; i++) {
            if (sieve[i]) {
                primes.add(i);
                for (int j = i * i; j < MAX && j >= 0; j += i) {
                    sieve[j] = false;
                }
            }
        }
    }

    public static void main(String[] args) {
        primes.add(-1);
        createSieve();
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int q = sc.nextInt();

        ArrayList<Stack<Integer>> aWaleStacks = new ArrayList<>();
        ArrayList<Stack<Integer>> bWaleStacks = new ArrayList<>();
        bWaleStacks.add(new Stack<>());// 0th indx pr khaali stack
        Stack<Integer> a0 = new Stack<>();

        while (n-- > 0) {
            int num = sc.nextInt();
            a0.push(num);
        }
        aWaleStacks.add(a0);

        int i = 1;
        for (i = 1; i <= q; i++) {

            Stack<Integer> a = new Stack<>();
            Stack<Integer> b = new Stack<>();
            Stack<Integer> ai_1 = aWaleStacks.get(i - 1);
            if (ai_1.isEmpty()) {
                break;
            }
            while (!ai_1.isEmpty()) {
                int topElement = ai_1.pop();

                int ithPrime = primes.get(i);

                if (topElement % ithPrime == 0) {
                    b.push(topElement);
                } else {
                    a.push(topElement);
                }
            }

            aWaleStacks.add(a);
            bWaleStacks.add(b);
        }

        for (i = 1; i < bWaleStacks.size(); i++) {
            Stack<Integer> b = bWaleStacks.get(i);
            while (!b.isEmpty()) {
                System.out.println(b.pop());
            }
        }

        if (i == q + 1) {
            Stack<Integer> aq = aWaleStacks.get(q);
            while (!aq.isEmpty()) {
                System.out.println(aq.pop());
            }
        }
    }
}
