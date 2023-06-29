import java.io.*;
import java.util.*;

public class BlockGame {
    // frequencies on each char in a string
    public static int[] charFreq(String word) {
        int[] freq = new int[26];
        for (int i = 0; i < word.length(); i++) {
            freq[word.charAt(i) - 'a']++;
        }
        return freq;
    }

    // selects max value for frequency of individual letters in words
    // adds the maximum to the sum of letter occurences in res arr
    public static void addFreq(int[] res, int[] freq1, int[] freq2) {
        for (int i = 0; i < res.length; i++) {
            res[i] += Math.max(freq1[i], freq2[i]);
        }
    }

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("blocks.in"));
        PrintWriter pw = new PrintWriter("blocks.out");

        int N = sc.nextInt();
        int[] res = new int[26];

        for (int i = 0; i < N; i++) {
            addFreq(res, charFreq(sc.next()), charFreq(sc.next()));
        }

        for (int x : res) {
            pw.print(x);
            pw.print('\n');
        }

        pw.close();
        sc.close();
    }
}
