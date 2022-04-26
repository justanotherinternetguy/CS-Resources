import java.io.*;
import java.util.*;
import java.lang.Math.*;
import java.lang.*;

public class StonesOnTheTable {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

		// input
		int len = sc.nextInt();
		String stones = sc.next();
		int cntr = 0;
		char PTR = stones.charAt(0);

		for (int i = 1; i < len; i++) {
			if (stones.charAt(i) == PTR)
				cntr++;

			else PTR = stones.charAt(i);
		}
		System.out.println(cntr);

		sc.close();
	}
}
