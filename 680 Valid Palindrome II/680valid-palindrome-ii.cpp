class Solution {
public:
    bool Valid(string a , int start, int end){
        while(start<=end){
            if(a[start]!=a[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int start = 0,end=s.size()-1;
        while(start<=end){
            if(s[start]!=s[end]){
                return Valid(s,start,end-1)||Valid(s,start+1,end);
            }
            start++;
            end--;
        }
        return true;
    }
};