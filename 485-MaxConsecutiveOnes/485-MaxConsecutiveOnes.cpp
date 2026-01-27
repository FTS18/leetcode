// Last updated: 28/01/2026, 00:30:20
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0,mx = 0;
        for (int i:nums) {
            if(i==1) {
                c++;
                mx=max(mx,c);
            }else{
                c=0;
            }
        }
        return mx;
    }
};
