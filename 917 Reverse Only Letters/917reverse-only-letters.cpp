class Solution {
public:
    string reverseOnlyLetters(string s) {
        string t = s;
        int i=0,j=s.length()-1;
        while(i<s.length() && j>=0){
            if(((s[i]>='A' && s[i]<='Z') ||(s[i]>='a' && s[i]<='z')) && ((t[j]>='A' && t[j]<='Z') ||(t[j]>='a' && t[j]<='z'))){
                s[i] = t[j];
                i++;
                j--;
            }
            if(i>s.length() || j<0) break;
            if(!((s[i]>='A' && s[i]<='Z') ||(s[i]>='a' && s[i]<='z'))){
                i++;
            }
            if(!((t[j]>='A' && t[j]<='Z') ||(t[j]>='a' && t[j]<='z'))){
                j--;
            }
        }
        return s;
    }
};