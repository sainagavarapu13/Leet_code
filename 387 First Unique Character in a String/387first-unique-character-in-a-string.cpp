class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>f(26,0);
        for( char c : s) f[tolower(c)-'a']++;
        for( int i=0;i<s.length();i++){
            int l = tolower(s[i])-'a';
            if( f[l]==1) return i;
        }
        return -1;
    }
};