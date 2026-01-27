// Last updated: 28/01/2026, 00:30:27
class Solution {
public:
    bool isPowerOfFour(int x) {
    if (x <= 0) {
        return false;
    }
    while (x % 4 == 0) {
        x /= 4;
    }
    return x == 1;
}

};