// Last updated: 29/01/2026, 22:39:48
1class Solution {
2public:
3    void rotate(vector<int>& v, int k) {
4        int n = v.size();
5        k %= n;
6        if (k == 0) return;
7
8        v.insert(v.end(), v.begin(), v.end());      
9        v.erase(v.begin(), v.begin() + (n - k));    
10        v.erase(v.begin() + n, v.end());            
11        }
12};
13