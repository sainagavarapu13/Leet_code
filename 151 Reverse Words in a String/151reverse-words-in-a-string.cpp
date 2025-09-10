class Solution {
public:
    string reverseWords(string s) {
        int n = s.length()-1;
        string b;
        for(int i = n;i>=0;i--){
            if(s[i]==' ') continue;
            else{
                int a = i;
                while(i>=0 && s[i]!=' ') i--;
                string word = s.substr(i+1,a-i);
                if(!b.empty()) b +=' ';
                b +=word;
            }
        }
        return b;
    }
};