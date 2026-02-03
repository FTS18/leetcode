// Last updated: 04/02/2026, 00:14:24
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string s;
5        for (int i = 0; i < max(word1.size(), word2.size()); i++) {
6            if (i < word1.size()) {
7                s.push_back(word1[i]);
8            }
9            if (i < word2.size()){
10                s.push_back(word2[i]);
11        }
12    }
13    return s;}
14}
15;