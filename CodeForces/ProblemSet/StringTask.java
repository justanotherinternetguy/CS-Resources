import java.io.*;
import java.util.*;
import java.lang.Math.*;
import java.lang.*;

public class StringTask {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        String str = sc.next();
        str = str.replaceAll("[aeiouyAEIOUY]", "");

        StringBuilder newStr = new StringBuilder(str);

        for (int i = 0; i < newStr.length(); i+=2) {
            newStr.insert(i, '.');
        }

        System.out.println(newStr.toString().toLowerCase());


		sc.close();
	}
}
