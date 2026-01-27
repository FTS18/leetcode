// Last updated: 28/01/2026, 00:30:13
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& nums) {
        vector<vector<int>> res(nums[0].size(), vector<int>(nums.size()));
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[0].size(); j++) {
                res[j][i] = nums[i][j];
            }
        }
        return res;
    }
};
