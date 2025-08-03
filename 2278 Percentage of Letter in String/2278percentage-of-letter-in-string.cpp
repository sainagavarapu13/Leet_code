class Solution {
public:
    int percentageLetter(string s, char t) {
        int cnt=0;
        for( char i : s){
            if( i == t) cnt++;
        }
        int l = s.size();
        int k = (cnt*100)/l;
        return k;
    }
};