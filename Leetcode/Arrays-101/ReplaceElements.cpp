class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mx = -1;
        int a = -1;
        int n = arr.size();
        
        for (int i = n - 1; i >= 0; --i) {
            a = arr[i];
            arr[i] = mx;
            mx = max(mx, a);
        }
        return arr;
    }
};
