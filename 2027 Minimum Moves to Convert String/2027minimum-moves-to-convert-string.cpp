class Solution {
public:
    int minimumMoves(string s) {
        int cnt=0;
        int len = s.size()-1;
        for( int i=0;i<=s.size()-1;){
            if( s[i]=='X'){
                cnt++;
               if( i+3 > len) break;
               else i=i+3;

            }else i++;
        }
        return cnt;
    }
};