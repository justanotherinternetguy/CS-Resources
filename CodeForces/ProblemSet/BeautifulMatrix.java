import java.io.*;
import java.util.*;
import java.lang.*;
import java.lang.Math.*;

public class BeautifulMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int coords[];
        coords = new int[2];
        int res = 0;

        // horizontal , vertical scan

        for (int x = 1; x <= 5; x++) {
            for (int y =1; y <= 5; y++) {
                int temp = sc.nextInt();
                if (temp == 1) {
                    coords[0] = x;
                    coords[1] = y;
                }
            }
        }

        if (coords[0] == 3 && coords[1] == 3){
            System.out.println(0);
        }

        else {
            res += Math.abs(coords[0] - 3);
            res += Math.abs(coords[1] - 3);
            System.out.println(res);
        }
    }
}
