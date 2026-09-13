class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowshift, vector<int>& colShift) {
        // vector<vector<int>>& v(grid.begin(),grid.end());
        for(int i=0;i<rowshift.size();i++){
            vector<int> res;
            for(int j=0;j<grid[i].size();j++){
                res.push_back(grid[i][(j+rowshift[i])%n]);
            }
            for(int j=0;j<grid[i].size();j++){
                grid[i][j] = res[j];
                // cout<<res[j]<<" ";
            }
            // cout<<endl;
        }
        for(int i=0;i<colShift.size();i++){
            vector<int> res;
            for(int j=0;j<grid.size();j++){
                res.push_back(grid[(j+colShift[i])%n][i]);
            }
            for(int j=0;j<grid.size();j++){
                grid[j][i] = res[j];
            }
        }
        return grid;
        
    }
};