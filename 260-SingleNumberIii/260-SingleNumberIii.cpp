// Last updated: 04/02/2026, 01:37:02
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int>m;
        for(int i :nums){
            m[i]++;
            }for(auto i:m){if (i.second==1){
                v.push_back(i.first);
            }
        }return v;
    }
};