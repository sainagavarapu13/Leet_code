class Solution {
public:
    bool checkString(string s) {
        int a=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='a') a++;
            if(a>=1 && s[i]=='a') return false;
        }
        return true;
    }
};