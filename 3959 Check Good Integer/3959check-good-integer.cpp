class Solution {
public:
    bool checkGoodInteger(int n) {
        int s=0,p=0;
        while(n){
            int k=n%10;
            s+=k;
            p+=(k*k);
            n/=10;
        }
        return (p-s)>=50;
    }
};