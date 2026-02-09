class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        int a=0,res = 0;
        for(auto x:m){
            if(x.second%2!=0) a++;
            res += x.second/2;
        }
        return res*2+(a>0 ? 1:0);
    }
};