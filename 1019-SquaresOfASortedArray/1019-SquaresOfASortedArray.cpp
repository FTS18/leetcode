// Last updated: 28/01/2026, 00:30:05
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i=0; i<nums.size();i++){
            nums[i]*=nums[i];
        }sort(nums.begin(),nums.end());return nums;
    }
};