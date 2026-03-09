class Solution {
public:
    int minOperations(string s) {
        int a = 0,b = 0,n =s.length();
        bool f = true;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && f){
                f = !f;
                continue;
            }
            else if(s[i]=='1' && !f){
                f = !f;
                continue;
            }
            else{
                f = !f;
                a++;
            }
        }
        f = true;
        for(int i=0;i<n;i++){
            if(s[i]=='1' && f){
                f = !f;
                continue;
            }
            else if(s[i]=='0' && !f){
                f = !f;
                continue;
            }
            else{
                f = !f;
                b++;
            }
        }
        return min(a,b);
    }
};