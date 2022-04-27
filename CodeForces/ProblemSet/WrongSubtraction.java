import java.io.*;
import java.util.*;
import java.lang.Math.*;
import java.lang.*;

public class WrongSubtraction {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

		int x = sc.nextInt();
		int rounds = sc.nextInt();

		for (int i = 0; i < rounds; i++) {
			int last = x%10;
			if (last != 0) {
				x--;
			}
	
			if (last == 0) {
				x /= 10;
			}
		}
		System.out.println(x);
		sc.close();
	}
}
