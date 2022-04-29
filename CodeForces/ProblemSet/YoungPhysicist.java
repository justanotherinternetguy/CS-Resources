import java.io.*;
import java.util.*;
import java.lang.Math.*;
import java.lang.*;

public class YoungPhysicist {
	public static void main (String[] args) {
		Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int rounds = sc.nextInt();
        int res = 0;
        int temp = 0;

        for (int i = 0; i < rounds; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();

            res += (x+y+z);
        System.out.println(res);

        }


        if (res == 0) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }

        

		sc.close();
	}
}


