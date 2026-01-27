// Last updated: 28/01/2026, 00:30:44
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans;
        int c=0;
        for(int i:nums){
            m[i]++;
            c+=1;
        }
        for(auto j:m){
            if(j.second>c/2){
                ans=j.first;
            };
        }return ans;
    }
};