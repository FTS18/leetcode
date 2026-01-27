// Last updated: 28/01/2026, 00:30:34
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int s=n*(n+1)/2;
        for (int i=0; i<n;i++){
            sum+=nums[i];
        }
        return s-sum;
    }
};