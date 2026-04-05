class Solution {
public:
    vector<long long> b;
    vector<vector<long long>> dp;

    long long f(int i,int k,int end){
        if(k==0) return 0;
        if(i>end) return 1e18;

        if(dp[i][k]!=-1) return dp[i][k];

        long long x = f(i+1,k,end);
        long long y = b[i] + f(i+2,k-1,end);

        return dp[i][k] = min(x,y);
    }

    long long minOperations(vector<int>& a, int k) {
        int n = a.size();

        if(k == 0) return 0;  
        if(n==1) return -1;

        b.resize(n);

        for(int i=0;i<n;i++){
            int l = a[(i-1+n)%n];
            int r = a[(i+1)%n];
            int c = max(l,r);
            if(a[i] <= c) b[i] = c - a[i] + 1;
            else b[i] = 0;
        }

        dp.assign(n, vector<long long>(k+1,-1));
        long long x = b[0] + f(2,k-1,n-2);

        dp.assign(n, vector<long long>(k+1,-1));
        long long y = f(1,k,n-1);

        long long ans = min(x,y);
        if(ans >= 1e18) return -1;
        return ans;
    }
};