// Last updated: 03/02/2026, 13:53:32
1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9class Solution {
10public:
11    int guessNumber(int n) {
12        int l = 1,r=n,m=0;
13        while (l <= r) {
14            m = l + (r - l) / 2;
15            int a = guess(m);
16            if (a == 0) {
17                 return m;
18            } 
19            else if (a == -1) {
20                r = m - 1;
21            } 
22            else {
23            l = m + 1;
24            }
25        }
26        return -1;
27    }
28};
29