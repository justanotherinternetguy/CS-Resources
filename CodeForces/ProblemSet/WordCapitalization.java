import java.io.*;
import java.util.*;
import java.lang.Math.*;
import java.lang.*;

public class WordCapitalization {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

		String str = sc.nextLine();

		String res = str.substring(0, 1).toUpperCase() + str.substring(1);

		System.out.println(res);
		
		sc.close();
	}
}
