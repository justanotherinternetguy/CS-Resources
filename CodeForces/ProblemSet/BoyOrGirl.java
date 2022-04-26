import java.io.*;
import java.util.*;
import java.lang.Math.*;
import java.lang.*;

public class BoyOrGirl {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

		String str = sc.nextLine();

		long cntr = str.chars().distinct().count();

		if (cntr % 2 == 1)
			System.out.println("IGNORE HIM!");
		else
			System.out.println("CHAT WITH HER!");


		sc.close();
	}
}
