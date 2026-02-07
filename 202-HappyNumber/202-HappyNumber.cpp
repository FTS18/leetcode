// Last updated: 07/02/2026, 19:31:12
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while (n != 1 && !s.count(n)) {
            s.insert(n);
            string a = to_string(n);
            int c = 0;
            for (int i = 0; i < a.size(); i++) {
                int d = a[i] - '0';
                c += d * d;
            }
            n = c;
        }
        return n == 1;
    }
};
