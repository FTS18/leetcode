// Last updated: 04/02/2026, 01:31:09
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int l=0,r=nums.size()-1;
5        while(l<=r){int m=l+(r-l) /2;
6        if (nums[m]==target) return m;
7        else if(nums[m]>target) r=m-1;
8        else l=m+1;}
9        return -1;
10    }
11};