import java.io.*;
import java.util.*;
import java.lang.*;
import java.lang.Math.*;

public class Template {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
		int rounds = sc.nextInt();

		for (int i = 1; i <= rounds; ++i) {
			System.out.println("Case #" + i + ": " + res);
		}
		sc.close();
	}
}