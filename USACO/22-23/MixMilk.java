import java.io.*;
import java.util.*;

public class MixMilk {
    public static int[][] milk = new int[3][2];

    static int[] pour(int a, int b) {
        int[] first = milk[a];
        int[] second = milk[b];
        int max = second[0];
        int sum = first[1] + second[1];
        int[] res = {0, 0};

        if (sum > max) {
            int leftover = sum-max;
            int poured = sum-leftover;
            res[0] = leftover;
            res[1] = poured;
        } else {
            milk[b][1] = sum;
            res[0] = 0;
            res[1] = sum;
        }
        return res;
    }

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("mixmilk.in"));
        PrintWriter pw = new PrintWriter("mixmilk.out");

        // 1 --> 2 --> 3 --> 1 --> 2
        // total 100 pours


        for (int i = 0; i < 3; i++) {
            int c, m;
            c = sc.nextInt();
            m = sc.nextInt();
            milk[i][0] = c;
            milk[i][1] = m;
        }
        int[] temp = {0, 0};

        for (int i = 0; i < 33; i++) {
            temp = pour(0, 1);
            milk[0][1] = temp[0];
            milk[1][1] = temp[1];

            temp = pour(1, 2);
            milk[1][1] = temp[0];
            milk[2][1] = temp[1];

            temp = pour(2, 0);
            milk[2][1] = temp[0];
            milk[0][1] = temp[1];
        }

        temp = pour(0, 1);
        milk[0][1] = temp[0];
        milk[1][1] = temp[1];

        pw.print(milk[0][1]);
        pw.print('\n');
        pw.print(milk[1][1]);
        pw.print('\n');
        pw.print(milk[2][1]);




        pw.close();
        sc.close();
    }
}
