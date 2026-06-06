class Solution {
public:
  int mod = 1e9+7;
  long long dp[25][210];
    long long check(int idx,int mini,int maxi,long long sum,int tight,string &a){
        if(sum>maxi) return 0;
        if(idx>=a.size()){
           if(sum>=mini && sum<=maxi)
            return 1;
            return 0;
        }
        if(tight==0&&dp[idx][sum]!=-1) return dp[idx][sum];
        int lim;
        long long ans=0;
        if(tight){
            lim=a[idx]-'0';
        }
        else lim=9;
        for(int i=0;i<=lim;i++){
            int t=(tight&&i==(a[idx]-'0'));

            ans=(ans+check(idx+1,mini,maxi,sum+i,t,a))%mod;
        }
         if(tight==0)
            dp[idx][sum]=ans;

        return ans;
    }
    string minusOne(string s){
    int i=s.size()-1;
    while(i>=0){

        if(s[i]>'0'){

            s[i]--;
            break;
        }

        s[i]='9';
        i--;
    }
    int pos=0;
    while(pos+1<s.size() && s[pos]=='0')
        pos++;
    return s.substr(pos);
}
    int count(string num1, string num2, int min_sum, int max_sum) {
      string num = minusOne(num1);
       memset(dp,-1,sizeof(dp));
     long long r =   check(0,min_sum,max_sum,0,1,num2) ;
     memset(dp,-1,sizeof(dp));
      long long l;
     l = check(0,min_sum,max_sum,0,1,num);
     return (((r-l)%mod)+mod)%mod;
    }
};