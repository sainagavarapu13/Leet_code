class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ma = INT_MIN;
        int cnt =1;
        for(int i=1;i<s.size();i++){
            if(s[i]>s[i-1] && s[i]-s[i-1]==1) cnt++;
            else if( s[i]==s[i-1]) continue;
            else{
                ma = max( ma , cnt);
                cnt=1;
            }
        }
        ma = max( ma , cnt);
        return ma;
    }
};