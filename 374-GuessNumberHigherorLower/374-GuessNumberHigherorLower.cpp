// Last updated: 03/02/2026, 13:52:48
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
12        int l = 1;
13        int r = n;
14        int m;
15        while (l <= r) {
16            m = l + (r - l) / 2;
17            int a = guess(m);
18            if (a == 0) {
19                 return m;
20            } 
21            else if (a == -1) {
22                r = m - 1;
23            } 
24            else {
25            l = m + 1;
26            }
27        }
28        return -1;
29    }
30};
31