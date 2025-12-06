class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()!=2){
            string a = "";
            for(int i=0;i<s.length()-1;i++){
                int b = s[i]-'0';
                int c = s[i+1] -'0';
                int d = (b+c)%10;
                a += d - '0';
            }
            s = a;
        }
        if(s[0]==s[1]) return 1;
        return 0;
    }
};