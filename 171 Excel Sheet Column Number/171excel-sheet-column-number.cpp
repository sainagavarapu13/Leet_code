class Solution {
public:
    int titleToNumber(string s) {
        int r =0;
        for( char c: s){
            int d = c-'A'+1;
            r=r*26 + d;
        }
        return r;
    }
};