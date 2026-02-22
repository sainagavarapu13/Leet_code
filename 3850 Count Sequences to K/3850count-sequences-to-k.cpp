class Solution {
public:
    vector<int>a;
    int cnt=0;
    map<tuple<int,long long,long long>,int>dp;
    int solve( int i , long long n , long long d , long long k){
        if( i== a.size()){
            if(n == k && d==1) return 1;
            return 0;
        }
        if(dp.count({i,n,d})) return dp[{i,n,d}];

        int ans = 0;

        // multi
        {long long nn = n*a[i];
        long long nd = d;
        long long g = __gcd(nn , nd);
        nn/=g;
        nd/=g;
        ans += solve( i+1,nn, nd,k);}

        //div
        {long long nd = d*a[i];
        long long nn = n;
        long long g = __gcd(nn , nd);
        nn/=g;
        nd/=g;
        ans += solve( i+1,nn, nd,k);}

        ans += solve( i+1,n, d,k);

        return dp[{i,n,d}] = ans;
    }

    int countSequences(vector<int>& nums, long long k) {
        a=nums;
        dp.clear();
        return solve( 0,1,1,k);
    }
};