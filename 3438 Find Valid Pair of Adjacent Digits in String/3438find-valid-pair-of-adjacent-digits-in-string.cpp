class Solution {
public:
    string findValidPair(string s) {
        string e="";
        map<char,int>m;
        for(auto x:s){
            m[x]++;
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]-'0' != s[i+1]-'0' && m[s[i]] == s[i]-'0' && m[s[i+1]] == s[i+1]-'0'){
            e +=s[i];
            e +=s[i+1];
            break;
            }
        }
        return e;
    }
};