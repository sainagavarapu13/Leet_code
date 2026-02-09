class Solution {
public:
    int fun( string s, int k , char t){
        int i=0,cnt=0;
        int ans = INT_MIN;
        for(int e=0;e<s.size();e++){
            if( s[e]!=t){
                cnt++;
            }
            while( cnt> k){
                if( s[i]!=t){
                    cnt--;
                }
                i++;
            }
            ans = max( e-i+1,ans);
        }
        return ans;
    }
    int characterReplacement(string s, int k) {
        int ma = INT_MIN;
        for( int i=0;i<26;i++){
            ma = max( ma , fun( s,k,'A'+i));
        }
        return ma;
    }
};