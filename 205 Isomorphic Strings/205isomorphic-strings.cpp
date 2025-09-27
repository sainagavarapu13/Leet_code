class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i,j;
        if(s.size()!=t.size()) return false;
        for(i=0;i<s.size();i++){
            for(j=i+1;j<s.size();j++){
                if(s[i]!=s[j]&&t[i]==t[j]) return 0;
                if(s[i]==s[j]&&t[i]!=t[j]) return 0;
            }
        }
        return 1;
    }
};