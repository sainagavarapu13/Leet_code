class Solution {
public:
    int rob(vector<int>& a) {
        if( a.size()==1) return a[0];
        if(a.size()==2) return max(a[0],a[1]);
        vector<int>dp(a.size(),0);
        dp[0]=a[0];
        dp[1]= max( a[0],a[1]);
        for( int i=2;i<a.size()-1;i++){
            dp[i]= max( dp[i-1],dp[i-2]+a[i]);
        }
        vector<int>b(a.size(),0);
        b[1]=a[1];
        b[2]=max( a[1],a[2]);
        for( int i=3;i<a.size();i++){
            b[i]= max( b[i-1],b[i-2]+a[i]);
        }
        return max( dp[a.size()-2],b[a.size()-1]);

        
    }
};