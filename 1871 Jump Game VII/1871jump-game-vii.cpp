class Solution {
public:
    
    bool canReach(string s, int a, int b) {
         if(s.size() == 0) return false;
        if( s[0]=='1' || s[s.size()-1]=='1') return 0;
        
        vector<bool>dp(s.size(),false);
        dp[0]=true;
        int x=0;
         int y;
        for( int i=0;i<s.size();i++){
                if(!dp[i] ) continue;
                 y= min( (int)s.size()-1,i+b);
                for( int j = max( x,i+a);j<=y;j++){
                    if(s[j]=='0')dp[j]=true;
                }
                x = y+1;

        }
        return dp[s.size()-1];
        
    }
};