import java.io.*;
import java.util.*;
 
public class Main {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int rounds = sc.nextInt();
 
        for (int i = 0; i <= rounds; i++){
            String n = sc.nextLine();
 
            if (n.length() > 10) {
                int len = n.length();
                String res = n.charAt(0) + String.valueOf(len-2) + n.charAt(len-1);
                System.out.println(res);
            }
            else
                System.out.println(n);
        }
    }
}