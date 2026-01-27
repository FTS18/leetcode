// Last updated: 28/01/2026, 00:30:14
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        } return s;
    }
};