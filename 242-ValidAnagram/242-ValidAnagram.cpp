// Last updated: 04/02/2026, 01:37:05
class Solution {
public:
    bool isAnagram(string k, string t) {
        unordered_map<char,int>m;
        int s=0;
        for(auto i:k){
            m[i]++;
        }for(auto i:t){
            m[i]--;
        }for(auto i:m){
            s+=abs(i.second);
        }if (s==0) return true; return false;
    }
};