import java.io.*;
import java.util.*;

public class CowCollege {
    public static void main(String[] args) throws IOException {
        PrintWriter pw = new PrintWriter(System.out);
        Scanner sc = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());

//        String line = br.readLine();
//        String[] tokens = line.split(" ");

        Integer[] cows = new Integer[N];

        for (int i = 0; i < N ;i++) {
            cows[i] = sc.nextInt();
        }


//        int a =0;
//        for (String token : tokens) {
//            cows[a++] = Integer.parseInt(token);
//        }

        Arrays.sort(cows, Collections.reverseOrder());

        int rev = 0;
        int temprev = 0;
        int fintut = cows[0];

        for (int tut = cows[0]; tut > 0; tut--) {
            temprev = 0;
            for (int i = 0; i < cows.length; i++) {
                if (tut <= cows[i]) {
                    temprev += tut;
                }
                if (temprev >= rev && tut <= fintut) {
                    rev = temprev;
                    fintut = tut;
                }
            }
        }

        pw.println(rev + " " + fintut);

        sc.close();
        pw.close();
    }
}
