// Last updated: 28/01/2026, 00:31:05
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        for(int i=1;i<=INT_MAX;i++){
            if(s.find(i) == s.end()){
                return i;
            }
        }
        return 0;
    }
};