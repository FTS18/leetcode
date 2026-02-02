// Last updated: 02/02/2026, 14:14:26
1class Solution {
2public:
3    int minSteps(string k, string t) {
4        int s=0;
5        unordered_map<char,int>m1;
6        for(auto i:k){
7            m1[i]++;
8        }for(auto i:t){
9            m1[i]--;
10        }
11        for(auto i:m1){
12            if (i.second<0){
13                s+=-i.second;
14            }
15        }return s;
16    }
17};