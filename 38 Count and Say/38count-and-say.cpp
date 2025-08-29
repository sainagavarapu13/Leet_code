class Solution {
public:
    string countAndSay(int n) {
        string s ;
        s="1";
        n=n-1;
        while( n--){
            string b;
            int cnt =1,i;
            for(  i=1;i<s.size();i++){
                if( s[i]==s[i-1]){
                    cnt++;
                }else{
                    b+=cnt+'0';
                    b+=s[i-1];
                    cnt=1;
                }
            }
            b+=cnt+'0';
            b+=s[i-1];
            s.erase();
            s=b;

        }
        return s;
    }
};