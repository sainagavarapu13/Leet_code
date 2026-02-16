class Solution {
public:
    bool canReach(string s,int m, int ma) {
        int n = s.size();
        if(s[n-1]!='0') return false;
        vector<bool> dp(n,false);
        dp[0] = true;
        int r = 0;
        for(int i=1;i<n;i++){
            if(i-m>=0 && dp[i-m]) r++;
            if(i-ma-1>=0 && dp[i-ma-1]) r--;
            dp[i] = (r>0 && s[i]=='0');
        }
        return dp[n-1];
    }
};