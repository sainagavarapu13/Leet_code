class Solution {
public:
    bool prime(int n){
        if(n<=1) return 0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    int largestPrime(int n) {
        int a =0,b=0,c=0;
        if(n<=1) return a;
        for(int i=2;i<=n;i++){
            if(prime(i)){
                a += i;
                b = i;
            }
            if(prime(a) && a<=n){
                c = a;
            }
            if(a>n){
                a -= b;
                return c;
            }
        }
        return a;
    }
};