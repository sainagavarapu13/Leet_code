class Solution {
public:
    const int MOD = 1e9+7;
    vector<vector<int>> dp;

    int check(int s,int e,int k,int cnt){

        if(abs(e-s) > k-cnt)
            return 0;

        if(cnt==k)
            return s==e;

        if(dp[s+1000][cnt] != -1)
            return dp[s+1000][cnt];

        long long ans = 0;

        ans += check(s+1,e,k,cnt+1);
        ans += check(s-1,e,k,cnt+1);

        return dp[s+1000][cnt] = ans % MOD;
    }

    int numberOfWays(int s, int e, int k) {
        dp.assign(3005, vector<int>(1005, -1));
        return check(s,e,k,0);
    }
};