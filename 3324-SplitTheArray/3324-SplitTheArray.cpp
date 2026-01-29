// Last updated: 29/01/2026, 22:42:39
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        for (auto i:m){
            if (i.second>2){
                return false;
            }
        }return true;
    }
};