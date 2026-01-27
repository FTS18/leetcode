// Last updated: 28/01/2026, 00:30:09
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int d = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                if (d < 0) { 
                    return false;
                }d++;
            } else if (nums[i] > nums[i + 1]) {
                if (d > 0) {
                    return false; 
                }d--;
            }
        }
        return true;
    }
};
