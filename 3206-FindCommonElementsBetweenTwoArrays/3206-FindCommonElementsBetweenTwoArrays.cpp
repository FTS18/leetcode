// Last updated: 28/01/2026, 00:29:42
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int c1 = 0, c2 = 0;

        for (int i : nums1) {
            for (int j : nums2) {
                if (i == j) {
                    c1++;
                    break;
                }
            }
        }

        for (int i : nums2) {
            for (int j : nums1) {
                if (i == j) {
                    c2++;
                    break;
                }
            }
        }

        return {c1, c2};
    }
};
