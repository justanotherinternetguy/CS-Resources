import java.io.*;
import java.util.*;
import java.lang.Math.*;
import java.lang.*;

public class SoldierAndBananas {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

		int start = sc.nextInt(); // cost of 1st b
		int initD = sc.nextInt(); // $
		int wants = sc.nextInt(); // # of b that he 
		
		int borrow = 0; // answer
		int sum = 0; // sum
		int coe = 1;

		for (int i = 1; i <= wants; i++) {
			sum+=(coe*start);
			coe++;
		}

		if (sum > initD) {
			System.out.println(sum-initD);
		}
		else if (sum <= initD) {
			System.out.println(0);
		}

		sc.close();
	}
}
