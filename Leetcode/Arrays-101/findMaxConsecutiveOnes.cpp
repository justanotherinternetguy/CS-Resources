class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int best = 0;
        int temp = 0;
        for (auto i : nums) {
            if (i == 1) {
                temp++;
                best = max(best, temp);
            }
            if (i == 0) {
                temp = 0;
            }
        }
        
        return best;
    }
};