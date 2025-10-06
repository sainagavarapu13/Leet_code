class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string t = "";
        int a = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') a++;
        }
        for(int i=0;i<s.length();i++){
            if(a>1) {
                t.push_back('1');
                a--;
            }
            else if (i==(s.length()-1)){
                t.push_back('1');
                continue;
            }
            else{
                t.push_back('0');
            }
        }
        return t;
    }
};