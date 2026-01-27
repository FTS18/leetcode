// Last updated: 28/01/2026, 00:30:31
class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int j=0;
        for (int i=0;i<a.size();i++){
            if (a[i]!=0){
                swap(a[i],a[j]);
                j++;
            }
        }
    }
};