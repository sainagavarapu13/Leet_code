class Solution {
public:
    bool palidrome(string s){
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int removePalindromeSub(string s) {
        return (palidrome(s)) ? 1 : 2;
    }
};