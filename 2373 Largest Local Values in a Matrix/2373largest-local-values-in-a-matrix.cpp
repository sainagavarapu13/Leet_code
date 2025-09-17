class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> maxlocal(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                int maxi = 0;
                for(int k=i;k<i+3;k++){
                    for(int h=j;h<j+3;h++){
                        maxi = max(maxi,grid[k][h]);
                    }
                }
                maxlocal[i][j] = maxi;
            }
        }
        return maxlocal;
    }
};