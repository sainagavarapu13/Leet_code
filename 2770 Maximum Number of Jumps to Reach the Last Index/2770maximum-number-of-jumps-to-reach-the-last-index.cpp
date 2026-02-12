class Solution {
public:
    int maximumJumps(vector<int>& a, int k) {
        vector<int>dp(a.size(),INT_MIN);
        dp[0]=0;
     
        for(int i=1;i<a.size();i++){
            int idx=INT_MIN;
            if(dp[i]==INT_MAX) continue;
            for(int j=0;j<i;j++){
                if(dp[j]==INT_MAX) continue;
                if(abs(a[i]-a[j]) <= k){
                    idx = max(idx,dp[j]);
                }
            }
            if(idx==INT_MIN){
                dp[i]=INT_MAX;
            }
            else
            dp[i] = idx+1;
            cout<<dp[i]<<" ";
        }
    if(dp.back() == INT_MAX) return -1;
        return dp.back();
    }
};