class Solution {
public:
    string compressedString(string w) {
        int b=0;
        string a;
        char ch = w[0];
        for(int i=0;i<w.length();i++){
            if(w[i]==ch && b<9) b++;
            else{
                a += b+'0';
                a += ch;
                ch = w[i];
                b = 1;
            }
        }
        a += b+'0';
        a += ch;
        return a;
    }
};