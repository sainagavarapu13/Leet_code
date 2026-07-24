class Solution {
public:
int k=1;
vector<vector<int>>dp;
    int check(int i,int j,vector<vector<int>>& a){
        if(i<0||j<0) return 0;
        if(i>=a.size()||j>=a[0].size()) return 0;
        if(dp[i][j]) return dp[i][j];
        int k=1;
        if(i+1<a.size()&&a[i][j]<a[i+1][j])
        k=max(k,1+check(i+1,j,a));
        if(j+1<a[0].size()&&a[i][j]<a[i][j+1])
        k=max(k,1+check(i,j+1,a));
        if(i-1>=0&&a[i][j]<a[i-1][j])
        k=max(k,1+check(i-1,j,a));
        if(j-1>=0&&a[i][j]<a[i][j-1])
        k=max(k,1+check(i,j-1,a));
        return dp[i][j]=k;
    }
    int longestIncreasingPath(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        dp.assign(n,vector<int>(m));
        int ans=1,k=1;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                ans = max(ans, check(i,j,a));
            }
        }
        return ans;
    }
};