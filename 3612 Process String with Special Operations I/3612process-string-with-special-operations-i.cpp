class Solution {
public:
    string processStr(string s) {
        string res;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                res.push_back(s[i]);
            }
            else if(!res.empty()&&s[i]=='*'){
                res.pop_back();
            }
            else if(s[i]=='#'){
                string temp = res;
                res+=temp;
            }
            else{
                reverse(res.begin(),res.end());
            }
        }
        return res;
    }
};