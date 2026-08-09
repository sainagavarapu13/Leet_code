class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int i,k=1;
        int len=s.size();
        for(i=0;i<s.size()/2;i++){
            if(len % k != 0) {
                 k++; continue;
            }
            string a;
            string b=s.substr(0,k);
             a.reserve(len);  
            int times=len/(k);
            while(times--){
                a+=b;
            }
            if(a==s) {
                return 1;
           }
            k++;
        }
        return 0;
    }
};