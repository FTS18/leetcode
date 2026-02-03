// Last updated: 04/02/2026, 01:36:27
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& n) {
        unordered_map<int,int>m;
        int s=0;
        for(auto i:n){
            m[i]++;
        }
        for(auto i:m){
            if (i.second==2){
s^=i.first;
            }            
        }return s;
    }
};