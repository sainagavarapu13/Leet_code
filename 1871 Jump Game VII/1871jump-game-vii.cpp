class Solution {
public:
    bool canReach(string s, int a, int b) {
        vector<int>dp(s.size(),0);
        dp[0]=1;
        int len = s.size(),ind=0;
        for(int i=0;i<s.size();i++){
            if(dp[i]==0) continue;
            for(int j=max(i+a,ind);j<=min(len,i+b);j++){
                if(s[j]=='0'){
                    dp[j]=1;
                }
            }
            ind=min(len,i+b)+1;
        }
        //cout<<s.size();
        return dp.back();
    }
};