class Solution {
public:
    long long rob(vector<int>& a, vector<int>& c) {
       
        vector<vector<int>>b;
        vector<int>v;
        v.push_back(a[0]);
        int colour = c[0];
        long long ans=0;
        for( int i=1;i<a.size();i++){
            if( colour == c[i]){
                v.push_back(a[i]);
            }else{
                
                if(!v.empty())b.push_back(v);
                colour = c[i];
                v.clear();
                v.push_back(a[i]);
            }
        }
         if(!v.empty())b.push_back(v);
        v.clear();
        for( auto n : b){
            if( n.size()==1){
                ans+=n[0];
                continue;
            }
             vector<long long>dp(n.size(),0);
             dp[0]=n[0];
             dp[1]= max( n[1],n[0]);
             for( int i=2;i<n.size();i++){
                dp[i]= max( dp[i-1],n[i]+dp[i-2]);
             }
             ans+=dp.back();
        }
        return ans;
    }
};