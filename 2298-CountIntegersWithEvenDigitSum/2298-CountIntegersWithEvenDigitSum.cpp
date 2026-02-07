// Last updated: 07/02/2026, 19:30:40
class Solution {
public:
    int s(int n) {
        int sm = 0;
        while (n > 0) {
            sm += n % 10;
            n /= 10;
        }
        return sm;
    }
    int countEven(int num) {
        int d = 0;
        for (int i = 1; i <= num; i++) {
            if (s(i) % 2 == 0) d++;
        }
        return d;
    }
};
