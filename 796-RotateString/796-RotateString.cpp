// Last updated: 03/02/2026, 22:47:49
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        string t = s + s;
5        int c = t.find(goal);
6        if (goal.size() == s.size()) {
7            if (c != -1) {
8                return true;
9            }
10        }
11        return false;
12    }
13};