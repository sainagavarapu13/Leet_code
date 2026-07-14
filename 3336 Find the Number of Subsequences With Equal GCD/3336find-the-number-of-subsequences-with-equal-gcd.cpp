class Solution {
public:
vector<vector<vector<long long>>>dp;
int  check(int idx , vector<int>&a , int g1,int g2){
    if(idx==a.size()){
         if(g1==g2){
       if(g1!=0)
        return 1;
        else return 0;
    }
       else return 0;
    }
    if(dp[idx][g1][g2]!=-1){
        return dp[idx][g1][g2];
    }

    return dp[idx][g1][g2] = (1LL*check(idx+1,a,gcd(g1,a[idx]),g2)+
           1LL*check(idx+1,a,g1,gcd(g2,a[idx]))+
            1LL*check(idx+1,a,g1,g2))%1000000007;
}
    int subsequencePairCount(vector<int>& a) {
        dp.clear();
        dp.assign(a.size()+1,vector<vector<long long>>(201,vector<long long>(201,-1)));
       return check(0,a,0,0)%1000000007;
    }
};