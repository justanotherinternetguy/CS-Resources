import java.io.*;
import java.util.*;
import java.math.*;
import java.lang.Math.*;

public class InfinityArea {
    public static void main(String[] args) {
        Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int rounds = sc.nextInt();

        for (int i = 1; i <= rounds; ++i) {
            double R = sc.nextInt();
            int A = sc.nextInt();
            int B = sc.nextInt();

            double res = 0;
            int dir = 0;

            while (R > 0) {
                if (dir%2 == 0) {
                    if (res != 0){
                        R = Math.floor(R/B);
                    }
                    res += (R*R)*3.1415926;
                }

                else {
                    R = R*A;
                    res += (R*R) * 3.1415926;
                }
                dir++;
            }

            System.out.println("Case #" + i + ": " + res);
        }

        sc.close();
    }
}