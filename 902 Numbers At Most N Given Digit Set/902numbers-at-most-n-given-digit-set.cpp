class Solution {
public:
int ans=0;
 int dp[12][2][2];
    int check(set<string>& a, string n,int idx,int tight,int started){
        if(idx>=n.size()){
           return started;
        }
       if(dp[idx][tight][started]!=-1)
            return dp[idx][tight][started];
        int lim;
        if(tight){
            lim=n[idx]-'0';
        }
        else lim=9;
        int ans=0;
        for(int i=0;i<=lim;i++){
            if(started==0&&i==0){
                 int t=(tight&&i==(n[idx]-'0'));
               ans+= check(a,n,idx+1,t,0);
                continue;
            }
            if(a.count(to_string(i))){
                int t=(tight&&i==(n[idx]-'0'));
                ans+=check(a,n,idx+1,t,1);
            }
        }
        return dp[idx][tight][started] = ans;
    }
    int atMostNGivenDigitSet(vector<string>& a, int n) {
        memset(dp,-1,sizeof(dp));
        string num = to_string(n);
        set<string>b;
        ans=0;
        for(auto& i:a) b.insert(i);
        return check(b,num,0,1,0);
        //return ans;
    }
};