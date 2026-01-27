// Last updated: 28/01/2026, 00:30:28
class Solution {
public:
    bool isPowerOfThree(int x) {
        if (x <= 0) {
            return false;
        }
        while (x % 3 == 0) {
            x /= 3;
        }
        return x == 1;
    }
};