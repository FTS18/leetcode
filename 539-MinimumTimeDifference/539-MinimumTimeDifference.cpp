// Last updated: 28/01/2026, 00:30:18
class Solution {
public:
    int findMinDifference(vector<string>& n) {
        vector<int> v;
        int m;
        for (auto i : n) {
            m = stoi(i.substr(0, 2)) * 60 + stoi(i.substr(3, 2));
            v.push_back(m);
        }
        sort(v.begin(), v.end());
        int d=INT_MAX, x;
        for (int i = 0; i < v.size() - 1; i++) {
            d = min(abs(v[i] - v[i + 1]), d);
        }
        x = v[0] - v[v.size() - 1] + 1440;
        return min(x, d);
    }
};