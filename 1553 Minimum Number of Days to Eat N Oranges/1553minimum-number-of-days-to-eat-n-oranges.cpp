class Solution {
public:
    map<int , int>dp;
    int minDays(int n) {
        if(n<=1) return n;
    if(dp[n]) return dp[n];
    int ans =INT_MAX;

        ans= min(n%2+minDays(n/2)+1,n%3+minDays(n/3)+1);
        dp[n]=ans;
        return dp[n];
    }
};