// Last updated: 28/01/2026, 00:29:54
class Solution {
public:
    string largestOddNumber(string x) {
        string g;
        bool f = false;
        int y = -1;
        for (int i = x.size() - 1; i >= 0; i--) {  
            int z = x[i] - '0';
            if (z % 2 != 0) {
                y = i;
                f = true;
                break;
            }
        }
        if (!f) {
            return "";
        }
        for (int i = 0; i <= y; i++) {
            g.push_back(x[i]);
        }

        return g;
    }
};
