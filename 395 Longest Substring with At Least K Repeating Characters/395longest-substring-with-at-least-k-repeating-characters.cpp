class Solution {
public:
    int longestSubstring(string s, int k) {
        if( s.size()<k) return 0;
        vector<int>m(26,0);
        for( char i : s){
            m[i-'a']++;
        }
        for( int i=0;i<s.size();i++){
            if( m[s[i]-'a']<k){
                int left =longestSubstring(s.substr(0,i),k);
                int right = longestSubstring(s.substr(i+1),k);
                return max( left , right);
            }
        }
        return s.size();
    }
};