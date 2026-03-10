class Solution {
public:
vector<int>dp;
int fun( int n){

    if( n==0) return 0;
    else if( n==1 || n==2 ) return 1;
    else if(dp[n]!=-1 ) return dp[n];
    else{ return dp[n]=fun( n-2)+fun( n-1)+fun(n-3);}
}
    int tribonacci(int n) {
        dp.assign(n+1,-1);
        return fun(n);
    }
};