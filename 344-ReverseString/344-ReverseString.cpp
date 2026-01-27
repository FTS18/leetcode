// Last updated: 28/01/2026, 00:30:25
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0,r=s.size()-1;
        while(l<r){
            swap(s[l++],s[r--]);
        }
    }
};