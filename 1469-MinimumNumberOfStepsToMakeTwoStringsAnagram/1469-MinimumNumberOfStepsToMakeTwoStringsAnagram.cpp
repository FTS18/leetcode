// Last updated: 04/02/2026, 01:36:41
class Solution {
public:
    int minSteps(string k, string t) {
        int s=0;
        unordered_map<char,int>m1;
        for(auto i:k){
            m1[i]++;
        }for(auto i:t){
            m1[i]--;
        }
        for(auto i:m1){
            if (i.second<0){
                s+=-i.second;
            }
        }return s;
    }
};