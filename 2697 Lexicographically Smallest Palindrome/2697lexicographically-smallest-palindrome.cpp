class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int r=s.size()-1,l=0;
        while( l<r){
            if( s[l] != s[r]){
                char c = min( s[l],s[r]);
                s[l]=c;
                s[r]=c;
            }
            l++;
            r--;
        }
        return s;
    }
};