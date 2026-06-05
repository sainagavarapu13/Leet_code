class Solution {
public:
    int climbStairs(int n, vector<int>& a) {
        int m =a.size();
        vector<int>dp(m,0);
        dp[0] = a[0]+1;
       if(n>=2) dp[1] = min(dp[0]+a[1]+1,a[1]+4);
       if(n>=3) dp[2] = min(dp[1]+a[2]+1,min(dp[0]+a[2]+4,a[2]+9));
        for(int i=3;i<n;i++){
            int one = dp[i-1]+a[i]+1;
            int two = dp[i-2]+a[i]+4;
            int thr =dp[i-3]+a[i]+9;
            dp[i] = min(one,min(two,thr));
        }
        return dp[n-1];
    }
};