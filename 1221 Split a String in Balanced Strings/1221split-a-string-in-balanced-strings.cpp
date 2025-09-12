class Solution {
public:
    int balancedStringSplit(string s) {
        int a=0,b=0,c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L')a++;
            else b++;
            if(a==b) c++;
        }
        return c;
    }
};