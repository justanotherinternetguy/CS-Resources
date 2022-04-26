import java.io.*;
import java.util.*;
import java.lang.*;
import java.lang.Math.*;

public class BitPP {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        
        int lines = sc.nextInt();
        int res = 0;
        String temp;

        for (int i = 0; i < lines; i++) {
            temp = sc.next();

            if (temp.charAt(0) == '+' || temp.charAt(1) == '+') {
                res++;
            }

            if (temp.charAt(0) == '-' || temp.charAt(1) == '-') {
                res--;
            }
            
        }
        System.out.println(res);

		sc.close();
	}
}