class Solution {
public:
    int minimumDeletions(string s) {
        int i=0,a=0,b=0;
        while(s[i]!='\0'){
            if(s[i]=='b') a++;
            else {
                b  = min(b+1,a);
            }
            i++;
        }
        return b ;
    }
};