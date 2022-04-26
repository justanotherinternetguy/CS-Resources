import java.io.*;
import java.util.*;
import java.lang.*;
import java.lang.Math.*;

public class Elephant {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

		int x = sc.nextInt();

		System.out.println((int)Math.ceil((x+4)/5));
		
		

		sc.close();
	}
}