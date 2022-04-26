import java.io.*;
import java.util.*;
import java.lang.*;
import java.lang.Math.*;



public class PetyaStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

        String A = sc.nextLine();
        String B = sc.nextLine();

        int res1 = A.compareToIgnoreCase(B);
        int res2 = B.compareToIgnoreCase(A);

        if (res1 < res2)
            System.out.println(-1);
        
        if (res2 < res1)
            System.out.println(1);
        if (res1 == res2)
            System.out.println(0);

    
    }    
}
