class Solution {
public:
    int lastRemaining(int n) {
       int h =1;
       int s=1;
       int r =n;
       int l =1;
       while( r>1){
        if( l==1 || r%2!=0){
            h+=s;
        }
        s*=2;
        r/=2;
        l =-l;
       }
       return h;
    }
};