import java.io.*;
import java.util.*;
import java.lang.*;
import java.lang.Math.*;

public class DominoPiling {
	public static void main (String[] args) {


		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
		int M = sc.nextInt();
		int N = sc.nextInt();

        System.out.println((int)Math.floor((M*N)/2));


		sc.close();
	}
}