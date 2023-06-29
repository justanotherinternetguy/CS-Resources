import java.io.*;
import java.util.*;

public class ShellGame {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("shell.in"));
        PrintWriter pw = new PrintWriter("shell.out");

        int N = sc.nextInt();

        int[] shellPositions = new int[3];
        int[] counter = new int[3]; // # of times each particular shell is guessed

        // place down shells
        for (int i = 0; i < 3; i++) {
            shellPositions[i] = i;
        }

        // simulate
        for (int i = 0; i < N; i++) {
            int a, b, g;
            a = sc.nextInt()-1;
            b = sc.nextInt()-1;
            g = sc.nextInt()-1;

            int t = shellPositions[b];
            shellPositions[b] = shellPositions[a];
            shellPositions[a] = t;

            counter[shellPositions[g]]++;
        }
        int res = Math.max(counter[0], Math.max(counter[1], counter[2]));
        pw.print(res);

        pw.close();
        sc.close();
    }
}
