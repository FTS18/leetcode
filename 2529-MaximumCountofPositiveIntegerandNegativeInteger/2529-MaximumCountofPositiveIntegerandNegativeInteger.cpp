// Last updated: 05/02/2026, 01:18:18
1class Solution {
2public:
3    int maximumCount(vector<int>& nums) {
4        int n = 0, i = 0;
5        for (int x : nums) {
6            if (x < 0) n++;
7            else if (x > 0) i++;
8        }
9        return max(n, i);
10    }
11};
12