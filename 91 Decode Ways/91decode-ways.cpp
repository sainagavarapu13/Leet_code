class Solution {
public:
vector<int>dp;
    int check(string a ,int i){
        if(i==a.size()) return 1;
        if(a[i]=='0') return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=check(a,i+1);
        if(i+1<a.size()){
            int num = (a[i]-'0')*10 + a[i+1]-'0';
            if(num<=26)
            ans+=check(a,i+2);
        }
        return dp[i]=ans;
    }
    int numDecodings(string s) {
        dp.clear();
        int n = s.size();
        dp.resize(n,-1);
        return check(s,0);
    }
};