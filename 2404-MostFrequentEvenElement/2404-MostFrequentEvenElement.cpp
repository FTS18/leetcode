// Last updated: 03/02/2026, 22:32:01
1class Solution {
2public:
3    int mostFrequentEven(vector<int>& nums) {
4        unordered_map<int, int> m;
5        for (auto& i : nums) {
6            m[i]++;
7        }
8        vector<pair<int, int>> v(m.begin(), m.end());
9        sort(v.begin(), v.end(), [](auto& a, auto& b) {
10            if (a.second == b.second) {
11                return a.first < b.first;
12            }
13            return a.second > b.second;
14        });
15        for (auto& i : v) {
16            if (i.first % 2 == 0) {
17                return i.first;
18            }
19        }
20        return -1;
21    }
22};
23