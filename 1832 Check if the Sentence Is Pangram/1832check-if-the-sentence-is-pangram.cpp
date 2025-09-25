class Solution {
public:
    bool checkIfPangram(string s) {
        map<char,int>a;
        for(int i=0;i<s.length();i++){
            a[s[i]]++;
        }
        if(a.size()!=26) return false;
        for(char i = 'a';i<='z';i++){
            if(a[i]==0) return false;
        }
        return true;
    }
};