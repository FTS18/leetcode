// Last updated: 05/02/2026, 01:28:22
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int,int> m;
5        for (int i : nums) m[i]++;
6        vector<pair<int,int>> v(m.begin(), m.end());
7        sort(v.begin(), v.end(), [](auto &a, auto &b) {
8            return a.second > b.second;
9        });
10        vector<int> ans;
11        for (int i = 0; i < k; i++) {
12            ans.push_back(v[i].first);
13        }
14        return ans;
15    }
16};
17