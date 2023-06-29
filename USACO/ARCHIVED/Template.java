import java.io.*;
import java.util.*;

public class ShellGame {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("shell.in"));

        int N = sc.nextInt();
        System.out.println(N);

        sc.close();
    }
}
