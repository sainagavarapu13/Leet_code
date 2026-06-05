class Solution {
public:
int dp[32][2];
    int check(int idx,int tight,string &s,int prev){
        if(idx==s.size()){
            return 1;
        }
        if(tight==0&&dp[idx][prev]!=-1) return dp[idx][prev];
        int lim;
        if(tight){
            lim=s[idx]-'0';
        }
        else lim=1;
        int cnt=0;
        for(int i=0;i<=lim;i++){
            int t=(tight&&i==(s[idx]-'0'));
            if(prev==1&&i==1) continue;
            
           cnt+= check(idx+1,t,s,i);
        }
        if(tight==0) dp[idx][prev]=cnt;
                return cnt;
    }
    int findIntegers(int n) {
    string s="";
    while(n){
    s += (n%2)+'0';
    n/=2;
    }
    reverse(s.begin(),s.end());
    memset(dp,-1,sizeof(dp));
   return check(0,1,s,0);
    }
};