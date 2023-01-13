import org.w3c.dom.ls.LSOutput;

import java.io.*;
import java.util.*;
public class Transform {
    static int to_int(char ch) {
        return (int) ch - 48;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String N;
        int P;
        N = sc.next();
        P = sc.nextInt();

        int ind_P = N.length() - P;
        int Pth = to_int(N.charAt(N.length() - P));

        String res = "";
        for (int i = 0; i < N.length(); i++) {
            String curr = "";
            int c = to_int(N.charAt(i));
            if (i < ind_P) {
                curr = c + Pth + "";
            } else if (i == ind_P) {
                curr = Pth + "";
            } else {
                curr = Math.abs(c - Pth) + "";
            }
            res += curr.charAt(curr.length() - 1);
        }
        System.out.println(res);
    }
}
