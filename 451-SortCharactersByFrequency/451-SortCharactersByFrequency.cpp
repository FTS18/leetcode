// Last updated: 03/02/2026, 21:57:08
1class Solution {
2public:
3    string frequencySort(string s) {
4        unordered_map<char, int> m;
5        for (char c : s) {
6            m[c]++;
7        }
8        vector<pair<char,int>> v(m.begin(), m.end());
9        sort(v.begin(), v.end(), [](pair<char,int>& a, pair<char,int>& b) {
10            return a.second > b.second;
11        });
12        string k = "";
13        for (auto &p : v) {
14            k.append(p.second, p.first);
15        }
16        return k;
17    }
18};
19