/*
* a FOR rOCK, b FOR pAPER, AND c FOR sCISSORS
* x FOR LOSE, y FOR DRAW, AND z FOR WIN (for YOU)
* 65, 66, 67 
*
*
* 1 FOR rOCK, 2 FOR pAPER, AND 3 FOR sCISSORS
* SHAPE + OUTCOME
*/

import java.io.*;
import java.util.*;

// 0, 2, 23

/*
 * CHECKWIN:
 * 0 = computer win
 * 3 = draw
 * 6 = player win
*/

public class PartTwo {
    static int getScore(char computer, int result) {
        if (result == 0) { // force loss
            if (computer == 'A') {
                return  3;
            } else if (computer == 'B') {
                return 1;
            } else if (computer == 'C') {
                return 2;
            }
        } else if (result == 3) { // force draw
            if (computer == 'A') {
                return 1;
            } else if (computer == 'B') {
                return 2;
            } else if (computer == 'C') {
                return 3;
            }
        } else if (result == 6) { // force win
            if (computer == 'A') {
                return 2;
            } else if (computer == 'B') {
                return 3;
            } else if (computer == 'C') {
                return 1;
            }
        }
        return -1;
    }

    static void readFile(String fileName) {
        try {
            File file = new File(fileName);
            FileReader fr = new FileReader(file);
            BufferedReader br = new BufferedReader(fr);
            StringBuffer sb = new StringBuffer();
            String line;

            HashMap<Character, Integer> outcomes = new HashMap<Character, Integer>();
            outcomes.put('X', 0);
            outcomes.put('Y', 3);
            outcomes.put('Z', 6);

            int sum = 0;
            while ((line = br.readLine()) != null) {
                int temp = 0;
                char out = line.charAt(2);


                sum += outcomes.get(out);
                sum += getScore(line.charAt(0), outcomes.get(out));

                sb.append(line);
                sb.append("\n");
            }
            fr.close();
//             System.out.println(sb.toString());
            System.out.println(sum);
            // System.out.println("PART TWO: " + sum);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        readFile("main.txt");
    }
}
