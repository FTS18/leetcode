// Last updated: 28/01/2026, 00:30:36
class Solution {
public:
    bool isPowerOfTwo(int n) {
      if(n<=0) return false;
      return (n & (n-1))==0;
    }
};