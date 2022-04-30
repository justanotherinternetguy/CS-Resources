import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

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