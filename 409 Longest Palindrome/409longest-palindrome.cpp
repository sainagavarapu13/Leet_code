class Solution {
public:
    int longestPalindrome(string s) {
        map <char , int> a;
        for( char i : s) a[i]++;
        int f =0;
        int cnt=0;
        for( auto& [c, n]:a){
            if( n%2 ==1 && !f){
                f=1;
                cnt+=n;
            }else if( n%2 ==1 && f ){
                cnt+=(n-1);
            }
            if( n%2 == 0 ) cnt+=n;
        }
        return cnt;
    }
};