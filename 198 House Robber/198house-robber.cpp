class Solution {
public:
    int rob(vector<int>& a) {
        if(a.size()==1) return a[0];
        if(a.size()==2) return max(a[0],a[1]);
        vector<int>dp(a.size());
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);
        for(int i=2;i<a.size();i++){
            dp[i] = max(dp[i-1] , dp[i-2]+a[i]);
        }
        return dp.back();
    }
};