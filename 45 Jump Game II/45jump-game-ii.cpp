class Solution {
public:
    int jump(vector<int>& a) {
        if( a.size() ==1) return 0;

        vector<int>dp(a.size(),INT_MAX);
        int ind=0;
        for( int i=0;i<a.size();i++){
           if(i==0) dp[0]=0;
             if (dp[i] == INT_MAX) continue;
        int val = a[i];
        int j=i+1;
            while( j<=val+i && j<a.size()){
                dp[j] = min( dp[i]+1,dp[j]);
                ind = j;
                j++;
            }
        }

        return dp[a.size()-1];
    }
};