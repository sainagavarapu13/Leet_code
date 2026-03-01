class Solution {
public:
    vector<int>dp;
    int fun( int n ){
        if( n ==1) return 0;
        if( dp[n]!=-1) return dp[n];
        int a = INT_MAX;
        for( int i=1;i<n;i++){
            int cost = fun(i)+( fun( n-i))+(i*(n-i));
            a = min( a , cost);
        }
        return dp[n]=a;
    }
    int minCost(int n) {
        dp.assign(600,-1);
        return fun( n);
        
    }
};