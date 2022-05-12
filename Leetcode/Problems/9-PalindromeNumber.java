class Solution {
    public boolean isPalindrome(int x) {
        // If x is a negative number it is not a palindrome
        // If x % 10 = 0, in order for it to be a palindrome the first digit should also be 0
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;
        
        int reversed = 0;
        int tmp = x;
        
        while (tmp > 0) {
            reversed = reversed * 10 + tmp % 10;
            tmp /= 10;
        }
        
        if (x == reversed)
            return true;
        else
            return false;
    }
}
