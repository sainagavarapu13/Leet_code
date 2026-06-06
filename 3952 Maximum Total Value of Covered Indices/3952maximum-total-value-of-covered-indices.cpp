class Solution {
public:
    vector<int> a;
    string s;
        int n ;
    long long dp[100005][2];
    long long fun(int i , int carry ){
        if( i<0) return 0;
        if( dp[i][carry] !=-1) return dp[i][carry];
        long long ans =0;
        if( s[i]=='0'){
            ans = (carry?a[i] : 0) + fun( i-1, 0);
        }else{
            // keep
            ans = a[i]+fun( i-1,0);
            if( i>0){
                ans = max(ans, (long long)(carry?a[i]:0)+fun( i-1,1));
            }
        }
        return dp[i][carry] = ans;
    }
    long long maxTotal(vector<int>& a_, string s_) {
        s = s_;
        a = a_;
        n = a.size()-1;
        memset( dp,-1,sizeof(dp));
        return fun( n,0); 
        
    }
};