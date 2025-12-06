class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int m = grid.size(),n=grid[0].size(),a=0;
        for(int i=0;i<n;i++){
            int b = 0;
            for(int j=0;j<m;j++){
                if(grid[j][i]>b){
                    b = grid[j][i];
                }
            }
            a +=b;
        }
        return a;
    }
};