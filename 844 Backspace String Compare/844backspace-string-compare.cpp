class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a = "",b="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                if(a.length()!=0){
                    a.pop_back();
                    continue;
                }
                continue;
            }
            a += s[i];
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                if(b.length()!=0){
                    b.pop_back();
                    continue;
                }
                continue;
            }
            b += t[i];
        }
        if(a.length()==b.length()){
            for(int i=0;i<a.length();i++){
                if(a[i]!=b[i]){
                    return 0;
                }
            }
            return 1;
        }
        return 0;
    }
};