class Solution {
public:
    bool fun(string t){
        string p = t;
        reverse(t.begin(),t.end());
        if(p==t) return true;
        else return false;
    }
    int countSubstrings(string s) {
        int  res=0;
        for(int i=0;i<s.length();i++){
            string a="";
            for(int j=i;j<s.length();j++){
                a+=s[j];
                if(s[i]==s[j]){
                    if(fun(a)){
                        res++;
                    }
                }
            }
        }
        return res;
    }
};