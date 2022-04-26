import java.io.*;
import java.util.*;
import java.lang.Math.*;
import java.lang.*;

public class BearAndBigBrother {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

		int L = sc.nextInt();
		int B = sc.nextInt();
		int years = 0;

		while (true) {
			if (L > B) {
				break;
			}
			L*=3;
			B*=2;
			years++;
		}

		System.out.println(years);

		sc.close();
	}
}
