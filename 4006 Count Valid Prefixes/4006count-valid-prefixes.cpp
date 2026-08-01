class Solution {
public:
    int countValidPrefixes(string s) {
       int z=0, o=0;
       int sum=0;
       for( int i=0;i<s.size();i++){
        if( s[i]=='0') z++;
        else o++;
        if( abs(z-o)<=1) sum++;

       } 
       return sum;
    }
};