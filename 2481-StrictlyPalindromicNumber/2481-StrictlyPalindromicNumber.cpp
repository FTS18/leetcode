// Last updated: 28/01/2026, 00:29:46
class Solution {
public:
    string fxn(int n, int base) {
        string r = "";
        while (n > 0) {
            r += to_string(n % base);
            n /= base;
        }
        return r;
    }

    bool isPal(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) {
        for (int base = 2; base <= n - 2; base++) {
            string s = fxn(n, base);
            if (!isPal(s)) return false;
        }
        return true;
    }
};
