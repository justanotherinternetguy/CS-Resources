import java.io.*;
import java.util.*;
import java.lang.*;
import java.lang.Math.*;

public class Word {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

		String str = sc.nextLine();

        int upper = 0, lower = 0;

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch >= 'A' && ch <= 'Z')
                upper++;
            else if (ch >= 'a' && ch <= 'z')
                lower++;
        }

        if (upper > lower) {
            System.out.println(str.toUpperCase());
        }
        else if (lower >= upper) {
            System.out.println(str.toLowerCase());
        }


		sc.close();
	}
}