// Last updated: 02/02/2026, 15:40:58
1class Solution {
2public:
3    int duplicateNumbersXOR(vector<int>& n) {
4        unordered_map<int,int>m;
5        int s=0;
6        for(auto i:n){
7            m[i]++;
8        }
9        for(auto i:m){
10            if (i.second==2){
11s^=i.first;
12            }            
13        }return s;
14    }
15};