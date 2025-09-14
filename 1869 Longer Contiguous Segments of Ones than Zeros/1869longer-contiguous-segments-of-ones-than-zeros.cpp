class Solution {
public:
    bool checkZeroOnes(string s) {
        if(s.length()==1 && s[0]=='1') return true;
        int a=0,b=0,c=0,d=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='1'&& s[i+1]=='1'){
                b++;
                if(b>a) a = b;
            }
            else if(s[i]=='0' && s[i+1]=='0'){
                d++;
                if(d>c) c = d;
            }
            else {
                d = 0;
                b = 0;
            }
        }
        if(a>c) return true;
        return false;
    }
};