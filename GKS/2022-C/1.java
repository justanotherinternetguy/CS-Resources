import java.io.*;
import java.util.*;
import java.util.regex.Pattern;

class Solution{
    static String digits=".*[0-9].*";
    static String lower=".*[a-z].*";
    static String upper=".*[A-Z].*";

    static String solve(String in){
        String extraChars="MMMMMMM";

        StringBuilder str=new StringBuilder(in);

        if(!Pattern.matches(lower, in))
            str.append("a");

        if(!Pattern.matches(upper, in))
            str.append("A");

        if(!Pattern.matches(digits, in))
            str.append("0");

        if(!in.contains("#") && !in.contains("@") && !in.contains("*") && !in.contains("&"))
            str.append("#");

        if(str.length() < 7)
            str.append(extraChars.substring(0, 7-str.length()));
        return str.toString();
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();

        for(int i = 1; i<=tc; i++){
            int n = sc.nextInt();
            String in = sc.next();
            System.out.println("Case #" + i + ": " + solve(in));
        }
    }
}
