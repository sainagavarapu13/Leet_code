class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> r(n),c(n);
        for(int i=0;i<n;i++){
            int a = 0,b = 0;
            for(int j = 0;j<n;j++){
                a = max(a,grid[i][j]);
                b = max(b,grid[j][i]);
            }
            r[i] = a;
            c[i] = b;
        }
        // for(int i=0;i<n;i++){
        //     cout<<r[i]<<" "<<c[i]<<endl;
        // }
        int res = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // cout<<res<<endl;
                res += min(r[i],c[j])-grid[i][j];
            }
        }
        return res;
    }
};