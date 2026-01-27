// Last updated: 28/01/2026, 00:30:29
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int c;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[0] == nums[nums[0]]) {
                c=nums[0];
            } else {
                swap(nums[0], nums[nums[0]]);
                c=-1;
            }
        }
        return c;
    }
};
