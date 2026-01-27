// Last updated: 28/01/2026, 00:30:46
class Solution {
public:
    string reverseWords(string s) {
        vector<string> w;
        string x;
        for (char c : s) {
            if (c == ' ') {
                if (!x.empty()) {
                    w.push_back(x);
                    x.clear();
                }
            } else {
                x += c;
            }
        }
        if (!x.empty()) {
            w.push_back(x);
        }
        x = "";
        int l = 0, r = w.size() - 1;
        while (l < r) {
            swap(w[l++], w[r--]);
        };
        for (auto i : w) {
            x += i + " ";
        }
        if (!x.empty()) {
            x.pop_back();
        }
        return x;
    }
};