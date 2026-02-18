class Solution {
public:
    bool hasAlternatingBits(int n) {
        string b ;
        while( n){
            b+=(n%2==0)?'0':'1';
            n/=2;
        }
        for( int i=1;i<b.size();i++){
            if( b[i-1]==b[i]) return 0;
        }
        return 1;
    }
};