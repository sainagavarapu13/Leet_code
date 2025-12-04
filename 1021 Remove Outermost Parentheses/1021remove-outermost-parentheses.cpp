class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        int i;
        string ans;
        for(i=0;i<s.size();i++){
            if(s[i]=='('){
                if(cnt>0) ans+=s[i];
                cnt++;
            }
            else{
                 cnt--;
                if(cnt!=0) ans+=s[i];
               
            }
        }
        return ans;
    }
};