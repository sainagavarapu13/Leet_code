class Solution {
public:
    unordered_map<int, int>dp;
    int minDays(int n) {
       if( n<=1) return n;
       if(dp.count(n)) return dp[n];
        int ans =INT_MAX;
        if(n % 3 != 0 || n% 2 != 0) ans = min( ans , minDays(n-1)+1);
        if( n%2==0) ans = min( ans , minDays(n/2)+1);
        if( n%3==0) ans = min( ans , minDays(n/3)+1);
        return dp[n]=ans; 
    }
};