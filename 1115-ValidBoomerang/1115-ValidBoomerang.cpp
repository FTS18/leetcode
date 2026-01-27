// Last updated: 28/01/2026, 00:30:03
class Solution {
public:
    bool isBoomerang(vector<vector<int>>& x) {
        int a2 = (x[0][0]-x[1][0])*(x[0][0]-x[1][0]) + (x[0][1]-x[1][1])*(x[0][1]-x[1][1]);
        int b2 = (x[1][0]-x[2][0])*(x[1][0]-x[2][0]) + (x[1][1]-x[2][1])*(x[1][1]-x[2][1]);
        int c2 = (x[0][0]-x[2][0])*(x[0][0]-x[2][0]) + (x[0][1]-x[2][1])*(x[0][1]-x[2][1]);
        double a = sqrt(a2), b = sqrt(b2), c = sqrt(c2);
        double s = (a+b+c)/2;
        double area2 = s*(s-a)*(s-b)*(s-c);
        if (a==0 || b==0 || c==0) return false;
        return area2 > 1e-8;
    }
};
