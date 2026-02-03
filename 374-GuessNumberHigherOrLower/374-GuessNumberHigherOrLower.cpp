// Last updated: 04/02/2026, 01:36:56
class Solution {
public:
    int guessNumber(int n) {
        int l = 1, r = n;
        while (l <= r) {
            int m = l + (r - l) / 2;
            int a = guess(m);
            if (a == 0) {
                return m;
            } else if (a == -1) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return -1;
    }
};
