class Solution {
public:
vector<vector<int>>dp;
    bool check( int i , int j , string &s ,string &p){
        if(i==s.size() && j == p.size()) return 1;
        if( i ==s.size()){
            if( j+1 < p.size() && p[j+1]=='*'){
                    return dp[i][j]=check(i,j+2, s, p);
            }
            return 0;
        }
        if( j == p.size()) return 0;
        if( dp[i][j]!=-1) return dp[i][j];
        if( j+1 < p.size() && p[j+1]=='*'){
            
          if(s[i]==p[j] || p[j]=='.'){
             bool ans = check(i+1, j, s, p);
            ans|=check(i, j+2, s, p);
            return dp[i][j]=ans;
        }
        return dp[i][j]=check(i, j+2, s, p);

        }
        if(s[i]==p[j] || p[j]=='.'){
            return dp[i][j]=check(i+1, j+1, s, p);
        }
        return dp[i][j]=0;

    }
    bool isMatch(string s, string p) {
        dp.assign(s.size()+1, vector<int>(p.size()+1, -1));
        return check(0,0,s,p);
    }
};