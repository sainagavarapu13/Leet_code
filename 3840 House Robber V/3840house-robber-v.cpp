class Solution {
public:
    long long rob(vector<int>& a, vector<int>& b) {
      vector<long long>dp(a.size(),0);
      if(a.size()==0) return 0;
      if(a.size()==1) return a[0];
      dp[0] = a[0];
      for(int i=1;i<a.size();i++){
        if(b[i]!=b[i-1]){
            dp[i] = dp[i-1]+a[i];
        }
        else{
            if(i>1)
            dp[i] = max(dp[i-2]+a[i] , dp[i-1]);
            else{
                dp[i] =max((long long)a[i],dp[i-1]);
            }
        }
      }
      return dp.back();
    }
};