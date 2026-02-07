// Last updated: 07/02/2026, 19:30:35
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = 0, i = 0;
        for (int x : nums) {
            if (x < 0) n++;
            else if (x > 0) i++;
        }
        return max(n, i);
    }
};
