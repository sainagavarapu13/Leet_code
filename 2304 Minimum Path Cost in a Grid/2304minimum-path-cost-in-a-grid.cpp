class Solution {
public:
    int minPathCost(vector<vector<int>>& a, vector<vector<int>>& cost) {
        int n=a.size();
        int m= a[0].size();
        vector<vector<int>>ans(n,vector<int>(m,INT_MAX));
        for(int j=0;j<m;j++)
         ans[0][j] = a[0][j];

        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
               for(int k=0;k<m;k++){
                ans[i+1][k] = min(ans[i+1][k],ans[i][j]+a[i+1][k]+cost[a[i][j]][k]);
               }
            }
        }
        int mini=INT_MAX;
        for(int i=0;i<m;i++){
            mini = min(mini,ans[n-1][i]);
        }
        return mini;
    }
};