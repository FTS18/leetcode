// Last updated: 04/02/2026, 01:36:48
class Solution {
public:
    bool rotateString(string s, string goal) {
        string t = s + s;
        int c = t.find(goal);
        if (goal.size() == s.size()) {
            if (c != -1) {
                return true;
            }
        }
        return false;
    }
};