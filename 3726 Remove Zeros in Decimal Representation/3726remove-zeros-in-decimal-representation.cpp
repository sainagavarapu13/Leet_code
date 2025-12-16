class Solution {
public:
    long long removeZeros(long long n) {
    string s;
        while( n){
        if( n%10!=0){
            s+=(n%10)+'0';
        }
            n/=10;
        }
        reverse( s.begin(),s.end());
        long long ans=0;
        for( char i : s){
            ans = ans*10+(i-'0');
        }
        return ans;
    }
};