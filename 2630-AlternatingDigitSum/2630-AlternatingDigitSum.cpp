// Last updated: 07/02/2026, 19:30:33
class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> v;
        int c, s = 0;
        while (n > 0) {
            c = n % 10;
            n /= 10;
            v.push_back(c);
        }
        int l = 0, r = v.size() - 1;
        while (l <= r) {
            swap(v[l++], v[r--]);
        }
        for (int i = 0; i < v.size(); i++) {
            if (i & 1) s -= v[i];
            else s += v[i];
        }
        return s;
    }
};
