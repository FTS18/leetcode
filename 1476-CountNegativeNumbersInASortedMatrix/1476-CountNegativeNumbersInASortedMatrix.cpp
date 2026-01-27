// Last updated: 28/01/2026, 00:29:58
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++){
            for (int j=0;j<grid[i].size();j++){
                if (grid[i][j]<0){
                    c+=1;
                }
            }
        }return c;
    }
};