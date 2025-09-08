class Solution {
public:
    bool checkString(string s) {
        bool change =1;
        for( int i=1;i<s.size();i++){
                if( s[i-1] =='b' && s[i]=='a'){ 
                 return 0;
                }
                
        }
        return 1;
    }
};