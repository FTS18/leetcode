// Last updated: 04/02/2026, 01:36:32
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> m;
        for (auto& i : nums) {
            m[i]++;
        }
        vector<pair<int, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), [](auto& a, auto& b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second;
        });
        for (auto& i : v) {
            if (i.first % 2 == 0) {
                return i.first;
            }
        }
        return -1;
    }
};
