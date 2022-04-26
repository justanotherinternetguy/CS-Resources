import java.io.*;
import java.util.*;
import java.lang.*;
import java.lang.Math.*;

public class Team {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
		int rounds = sc.nextInt();
		int res = 0;

		for (int i = 1; i <= rounds; ++i) {
			int tmp = 0;
			int P = sc.nextInt();
			int V = sc.nextInt();
			int T = sc.nextInt();

			if ((P + V + T) >= 2)
				res++;

		}

		System.out.println(res);
		sc.close();
	}
}