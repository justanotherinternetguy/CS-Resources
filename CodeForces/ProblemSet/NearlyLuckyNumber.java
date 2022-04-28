import java.util.*;
import java.io.*;
import java.lang.*;
import java.lang.Math.*;

public class Main {
    public static void main (String[] args) {
        Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        long n = sc.nextLong();
        String nstr = Long.toString(n);

        int cntr = 0;

        for (int i = 0; i < nstr.length(); i++) {
            if (nstr.charAt(i) == '4' || nstr.charAt(i) == '7') {
                cntr++;
            }
        }

        if (cntr == 4 || cntr == 7) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }

        // 4, 7



        sc.close();
    }
}