// Last updated: 04/02/2026, 01:37:08
class Solution {
public:
    int findKthLargest(vector<int>& V, int k) {
        sort(V.begin(), V.end());
        return V[V.size() - k];
    }
};
