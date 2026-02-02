// Last updated: 02/02/2026, 15:36:18
1class Solution {
2public:
3    vector<int> singleNumber(vector<int>& nums) {
4        vector<int> v;
5        unordered_map<int,int>m;
6        for(int i :nums){
7            m[i]++;
8            }for(auto i:m){if (i.second==1){
9                v.push_back(i.first);
10            }
11        }return v;
12    }
13};