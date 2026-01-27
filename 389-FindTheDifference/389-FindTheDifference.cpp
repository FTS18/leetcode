// Last updated: 28/01/2026, 00:30:24
class Solution {
public:
    char findTheDifference(string s, string t) {
        char x=0;
        for(auto i:s) x^=i;
        for(auto i:t) x^=i;
        return x;
    }
};