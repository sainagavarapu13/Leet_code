class Solution {
public:
    int minimumDeletions(string s) {
        int a=0,b=0,i=0;
        while(i<s.size()){
            if( s[i]=='b') a++;
            else{
                b = min( b+1 , a);
            }
            i++;
        }
        return b;
    }
};