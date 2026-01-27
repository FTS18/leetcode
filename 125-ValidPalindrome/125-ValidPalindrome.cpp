// Last updated: 28/01/2026, 00:30:51
class Solution {
public:
    bool isPalindrome(string s) {
        string g;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                g.push_back(tolower(s[i]));
            }
        }
        int l = 0,r = g.size()-1;
        while (l < r) {
            if (g[l++] != g[r--]) {
                 return false;
            }
        }
        return true;
    }
};