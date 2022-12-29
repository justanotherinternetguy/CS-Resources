/*
 * a FOR rOCK, b FOR pAPER, AND c FOR sCISSORS
 * x FOR rOCK, y FOR pAPER, AND z FOR sCISSORS (for YOU)
 * 65, 66, 67
 *
 *
 * 1 FOR rOCK, 2 FOR pAPER, AND 3 FOR sCISSORS
 * 0 IF YOU LOST, 3 IF THE ROUND WAS A DRAW, AND 6 IF YOU WON
 *
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

public class PartOne {
    static int checkWin(char computer, char player) {
        int intComputer = (int) computer;
        int intPlayer = (int) player - 23;
        if (intComputer == intPlayer) {
            return 3;
        } else if (computer == 'A') {
            if (player == 'Y') {
                return 6;
            } else if (player == 'Z') {
                return 0;
            }
        } else if (computer == 'B') {
            if (player == 'X') {
                return 0;
            } else if (player == 'Z') {
                return 6;
            }
        } else if (computer == 'C') {
            if (player == 'X') {
                return 6;
            } else if (player == 'Y') {
                return 0;
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

            int sum = 0;
            while ( ( line=br.readLine() ) != null ) {
                int temp = 0;
                int outcome = checkWin(line.charAt(0), line.charAt(2));

                if (line.charAt(2) == 'X') temp += 1;
                if (line.charAt(2) == 'Y') temp += 2;
                if (line.charAt(2) == 'Z') temp += 3;

                sum += (temp + outcome);

                sb.append(line);
                sb.append("\n");
            }
            fr.close();
            // System.out.println(sb.toString());
            System.out.println("PART ONE: " + sum);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        readFile("main.txt");
    }
}
