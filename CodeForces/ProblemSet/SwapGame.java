import java.io.*;
import java.util.*;

public class SwapGame {
    static void solve(int n, ArrayList<Integer> arr) {
        for (int i : arr) {
            System.out.println(i);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T;
        T = sc.nextInt();
        
        for (int i = 0; i < T; i++) {
            ArrayList<Integer> arr = new ArrayList<Integer>();
            int n, b;
            n = sc.nextInt();
            for (i = 0; i < n; i++) {
                int tmp;
                tmp = sc.nextInt();
                arr.add(tmp);
            }
            solve(n, arr);
        }
    }
}
