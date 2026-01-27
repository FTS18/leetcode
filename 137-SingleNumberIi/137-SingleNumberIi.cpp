// Last updated: 28/01/2026, 00:30:47
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        int ans=-1;
        for(auto i: nums){
            m[i]++;
        }for(auto j: m){
            if(j.second==1){
                ans=j.first;
            }
        }return ans;
    }
};