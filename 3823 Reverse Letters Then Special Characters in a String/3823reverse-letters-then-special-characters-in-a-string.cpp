class Solution {
public:
    string reverseByType(string s) {
        string c , spl;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                c+=s[i];
            }
            else spl+=s[i];
        }
        reverse(c.begin(),c.end());
        reverse(spl.begin(),spl.end());
        int i1=0,i2=0;
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                ans+=c[i1++];
            }
            else ans+=spl[i2++];
        }
        return ans;
    }
};