class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string b,a,m;
        for(char c:s){
            if(c==x){
                b += c;
            }
            else if(c==y){
                a +=c;
            }
            else{
                m +=c;
            }
        }
        return a+m+b;
    }
};