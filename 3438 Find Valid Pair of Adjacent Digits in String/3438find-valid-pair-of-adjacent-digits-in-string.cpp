class Solution {
public:
    int fre(string a,char k){
        int i,cnt=0;
        for(i=0;i<a.size();i++){
            if(a[i]==k){
                cnt++;
            }
        }
        return cnt;
    }
    string findValidPair(string s) {
        int i;
        string res;
        for(i=0;i<s.size();i++){
            if(s[i]!=s[i+1]){
            if((s[i]-'0')==fre(s,s[i])){
                if((s[i+1]-'0')==fre(s,s[i+1])){
                   res+=s[i];
                   res+=s[i+1];
                    break;
                }
            }
            }
        }
        return res;
    }
};