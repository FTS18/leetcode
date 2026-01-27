// Last updated: 28/01/2026, 00:30:37
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int> ans;
        int c=0;
        for(int i:nums){
            m[i]++;
            c+=1;
        }
        for(auto j:m){
            if(j.second>c/3){
                ans.push_back(j.first);
            };
        }return ans;
    }
};