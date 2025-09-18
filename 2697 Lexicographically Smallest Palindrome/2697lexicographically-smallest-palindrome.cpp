class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.length()-1,a=0,i=0;
        while(i<n){
            if(s[i]!=s[n]){
                if(s[i]<s[n]){
                    s[n] = s[i];
                }
                else s[i] = s[n];
            }
            i++;
            n--;
        }
        return s;
    }
};