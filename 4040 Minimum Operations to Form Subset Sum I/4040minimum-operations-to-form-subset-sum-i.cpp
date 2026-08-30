class Solution {
public:
    int minOperations(vector<int>& nums, int sum) {
        const int INF = 1e9;
        vector<int>dp(sum+1,INF);
        dp[0] = 0;
        for(auto& x:nums){
            vector<pair<int,int>>v;
            int a = x , c=0;
            while(a<=sum){
                v.push_back({a,c});
                a*=2;
                c++;
            }
            a = x;
            c=0;
            while(a>1){
                a/=2;
                c++;
                if(a<=sum){
                    v.push_back({a,c});
                }
            }
            vector<int>ndp = dp ;
            for(int s = 0;s<=sum;s++){
                if(dp[s] == INF){
                    continue;
                }
                for(auto& p:v){
                    int val = p.first;
                    int cost = p.second;
                    if(s+val <= sum){
                        ndp [s+val] = min(ndp[s+val],dp[s]+cost);
                    }
                }
            }
            dp = ndp ;
        }
        return dp[sum] == INF?-1:dp[sum];
    }
};