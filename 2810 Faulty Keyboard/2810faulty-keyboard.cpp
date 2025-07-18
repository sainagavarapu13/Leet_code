class Solution {
public:
    string finalString(string s) {
       string r;
        for( int i=0;i<s.length();i++){
                if( s[i]=='i'){
                reverse( r.begin(),r.end());
                }else{
                    r+=s[i];
                }
            
        }
        return r;
    }
};