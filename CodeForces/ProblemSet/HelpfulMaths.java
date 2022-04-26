import java.io.*;
import java.util.*;
import java.lang.Math.*;
import java.lang.*;

public class HelpfulMaths {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
		ArrayList<Character> res = new ArrayList<Character>();

		String sum = sc.next();

		for (int i = 0; i < sum.length(); i++) {
			if (sum.charAt(i) != '+') {
				res.add(sum.charAt(i));
			}
		}

		Collections.sort(res);


		for (int j = 0; j < res.size()-1; j++) {
			System.out.print(res.get(j));
			System.out.print('+');
		}

		System.out.print(res.get(res.size()-1));
		


		sc.close();
	}
}
