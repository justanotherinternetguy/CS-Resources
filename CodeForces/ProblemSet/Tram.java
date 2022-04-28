import java.util.*;
import java.io.*;
import java.lang.*;
import java.lang.Math.*;

public class Tram {
    public static void main (String[] args) {
        Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int passengers = 0;
        int max = 0;
        int stops = sc.nextInt();

        for (int i = 0; i < stops; i++) {
            int off = sc.nextInt();
            int on = sc.nextInt();

            passengers += on;
            passengers -= off;
            if (Math.max(passengers, max) == passengers) max = passengers;
        }
        System.out.println(max);

        sc.close();
    }
}