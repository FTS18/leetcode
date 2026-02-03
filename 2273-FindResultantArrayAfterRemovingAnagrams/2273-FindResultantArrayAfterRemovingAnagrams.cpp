// Last updated: 04/02/2026, 00:42:29
1class Solution {
2public:
3    vector<string> removeAnagrams(vector<string>& words) {
4        vector<string>v;
5        string s;
6        for(auto &i:words){
7            string t=i;
8            sort(i.begin(),i.end());
9            if(s!=i){
10                v.push_back(t);
11                s=i;
12            }
13        }return v;
14    }
15};