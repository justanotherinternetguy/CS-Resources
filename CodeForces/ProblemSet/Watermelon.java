import java.io.*;
import java.util.*;
 
public class Watermelon {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); 
        n = n-2;
 
        if (n%2 == 0 && n != 0)
            System.out.println("YES");
 
        else
            System.out.println("NO");
    }
}