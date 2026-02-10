class Solution {
public:
    int rob(vector<int>& a) {
         int n = a.size();
        if (n == 1) return a[0];
        if (n == 2) return max(a[0], a[1]);
        vector<int>dp(a.size() , 0);
        vector<int>dp1(a.size(),0);
        dp1[1] = a[1];
        dp1[2] =max(a[1],a[2]);
        dp[0]=a[0];
        dp[1] = max(a[0],a[1]);
        for(int i=2;i<a.size()-1;i++){
            dp[i] = max(dp[i-1],dp[i-2]+a[i]);
        }
        for(int i=3;i<a.size();i++){
            dp1[i] = max(dp1[i-1],dp1[i-2]+a[i]);
        }
        return  max(dp[n - 2], dp1[n - 1]);
    }
};