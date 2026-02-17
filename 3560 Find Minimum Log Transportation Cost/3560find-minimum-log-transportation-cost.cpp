class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long sum=0;
        if(n>k){
            int d = n-k;
            sum+= ((long long)d*(n-d));
        }
        if(m>k){
            int d=m-k;
            sum+=((long long)d*(m-d));
        }
        return sum;
    }
};