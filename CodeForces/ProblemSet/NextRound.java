import java.io.*;
import java.util.*;
import java.lang.*;
import java.lang.Math.*;

public class NextRound {
	public static void main (String[] args) {
		int temp;
		int res = 0;


		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
		int N = sc.nextInt();
		int K = sc.nextInt();
		int arr[];
		arr = new int[N];
		sc.nextLine();

		// add everything into array
		for (int i = 0; i < N; i++) {
			temp = sc.nextInt();
			arr[i] = temp;
		}

		// scan thru
		int compare = arr[K-1];


		for (int j = 0; j < arr.length; j++) {
			if (arr[j] >= compare) {
				if (arr[j] > 0)
					res++;
				else
					continue;
			}
		}


			System.out.println(res);

		sc.close();
	}
}