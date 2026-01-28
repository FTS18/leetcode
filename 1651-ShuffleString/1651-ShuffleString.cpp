// Last updated: 28/01/2026, 16:49:38
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string v(s.size(),' ');
        for(int i=0;i<s.size();i++){
            v[indices[i]]=s[i];
        }
            return v;
    }
};