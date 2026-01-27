// Last updated: 28/01/2026, 00:31:19
class Solution {
public:
    double findMedianSortedArrays(vector<int> nums1, vector<int> nums2) {
        for (int i = 0; i < nums2.size(); i++) {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        double k;
        if (nums1.size() % 2 == 0) {
            k = (nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
        } else {
            k = nums1[n / 2];
        }
        return k;
    }
};