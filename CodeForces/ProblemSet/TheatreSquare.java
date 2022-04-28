import java.io.*;
import java.util.*;
import java.lang.Math.*;
import java.lang.*;

public class TheatreSquare {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));

        double n = sc.nextInt();
        double m = sc.nextInt();
        double a = sc.nextInt();
        System.out.println( (long) (Math.ceil(n/a) * Math.ceil(m/a)));


		sc.close();
	}
}
