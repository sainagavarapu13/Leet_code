class Solution {
public:
    int mirrorDistance(int n) {
        if(n<10) return 0;
        int b = 0,a=n;
        while(a){
            b = b*10 + a%10;
            a =  a/10;
        }
        int d  = abs(n-b);
        return d;
    }
};