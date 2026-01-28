// Last updated: 29/01/2026, 01:03:33
1class Solution {
2public:
3    bool isPossibleToSplit(vector<int>& nums) {
4        unordered_map<int,int>m;
5        for(auto i:nums){
6            m[i]++;
7        }
8        for (auto i:m){
9            if (i.second>2){
10                return false;
11            }
12        }return true;
13    }
14};