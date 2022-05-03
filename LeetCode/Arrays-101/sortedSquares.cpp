class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> temp;
        
        for (auto i : nums) {
            temp.push_back(i*i);
        }
        
        sort(temp.begin(), temp.end());
        return temp;
    }
};