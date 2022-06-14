class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert( nums1.end(), nums2.begin(), nums2.end() );
        int n = nums1.size();
        sort(nums1.begin(), nums1.begin()+n);
        
        // even (avg two mid nums)
        if (nums1.size() % 2 == 0) {
            int m = (nums1.size() / 2)-1;
            int n = m+1;
            
            double res = (double) (nums1[m] + nums1[n]) / 2;
            return res;
        }
        
        if (nums1.size() % 2 == 1) {
            int m = nums1.size() / 2;
            double res = nums1[m];
            return res;
        }
        return 0;
    }
};
