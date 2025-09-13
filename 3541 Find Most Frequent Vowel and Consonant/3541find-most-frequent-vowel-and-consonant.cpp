class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> m;
        int a=0,b=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
                m[s[i]]++;
                if(m[s[i]]>a) a = m[s[i]];
            }
            else if(s[i]>'a' && s[i]<='z'){
                m[s[i]]++;
                if(m[s[i]]>b) b = m[s[i]];
            }
        }
        return a+b;
    }
};