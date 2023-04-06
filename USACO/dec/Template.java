import java.io.*;
import java.util.*;

public class Template {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);
        StringTokenizer st = new StringTokenizer(br.readLine());

        int M = Integer.parseInt(st.nextToken());

        int[] arr = new int[3];

        for (int i = 0; i < 3; i++) {
            int temp = Integer.parseInt(br.readLine());
            arr[i] = temp;
        }

        for (int x : arr) {
            pw.println(x);
        }

        pw.close();

    }
}