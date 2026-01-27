// Last updated: 28/01/2026, 00:30:21
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        map<int,int> m;

        for (int i : nums) {
            m[i]++;
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (m.find(i) == m.end()) {
                v.push_back(i);
            }
        }
        return v;
    }
};
