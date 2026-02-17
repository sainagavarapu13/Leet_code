class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long val = 0;
        if( n>k) val+= 1ll*k*(n-k);
        if( m>k) val+=1ll*k*(m-k);
        return val;
    }
};