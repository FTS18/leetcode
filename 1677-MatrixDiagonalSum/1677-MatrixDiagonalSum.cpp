// Last updated: 28/01/2026, 00:29:55
class Solution {
public:
    int diagonalSum(vector<vector<int>>& nums) {
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                if (i == j) {
                    c += nums[i][j];
                    c += nums[i][nums.size() - 1 - i];
                }
            }
        }
        if (nums.size() % 2==0) {
            return c;
        }else{
            return c-nums[nums.size()/2][nums.size()/2];
        }
    }
};