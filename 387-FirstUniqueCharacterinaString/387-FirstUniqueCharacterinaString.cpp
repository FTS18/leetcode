// Last updated: 04/02/2026, 00:52:42
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        map<char,int> m;
5        for(char c : s) m[c]++;
6        for(int i = 0; i < s.size(); i++) {
7            if(m[s[i]] == 1){
8                return i;}
9        }
10
11        return -1;
12    }
13};
14