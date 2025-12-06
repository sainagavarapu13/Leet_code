class Solution {
public:
    long long removeZeros(long long n) {
        long long a = 0;
        long long dig = log10(n);
        string s = "";
        while(n>0){
            long long c = n%10;
            if(c==0){
                n = n/10;
                continue;
            }
            s += '0' + c;
            n = n/10;
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            a  = a*10 + (s[i]-'0');
        }
        return a;
    }
};