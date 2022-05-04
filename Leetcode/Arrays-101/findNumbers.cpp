class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        // int(log10(number) + 1);
        
        for (auto i : nums) {
            if (int(log10(i) + 1) % 2 == 0) {
                res++;
            }
        }
        return res;
    }
};