class Solution {
public:
    bool checkGoodInteger(int n) {
        int s1=0,s2=0;
        while(n){
            int k=n%10;
            s1+=k;
            s2+=(k*k);
            n/=10;
        }
        if(s2-s1>=50) return 1;
        return 0;
    }
};