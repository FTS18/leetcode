// Last updated: 28/01/2026, 00:31:14
class Solution {
public:
    int value(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int ans=0, prev=0;

        for(int i=s.size()-1;i>=0;i--){
            int curr = value(s[i]);
            if(curr < prev) {
                ans -= curr;
            }else {
                ans += curr;
            }
            prev = curr;
        }
        return ans;
    }
};
