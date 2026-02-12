class Solution {
public:
    int maximumJumps(vector<int>& a, int t) {
        int cnt=0;
        vector<int>dp(a.size(),INT_MIN);
        dp[0]=0;
        for( int i=1;i<a.size();i++){
            int val = INT_MIN;
            if( dp[i]==INT_MAX) continue;
            for( int j =0;j<i;j++){
                    if( dp[j]==INT_MAX) continue;
                    if( abs( a[j]-a[i])<=t){
                        val = max( val,dp[j]);
                    }
            }
            if( val == INT_MIN){
                dp[i]=INT_MAX;
            }else{
                dp[i]=val+1;
            }

        }
        if( dp.back()==INT_MAX) return -1;
        else return dp.back();
    }
};