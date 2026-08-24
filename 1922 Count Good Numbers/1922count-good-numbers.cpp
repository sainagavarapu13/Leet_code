class Solution {
public:
        long long pow_(long long a,long long b){
            long long res=1;
            while(b>0){
                if(b%2!=0){
                    res=(res*a)%1000000007;
                }
                a=(a*a)%1000000007;
                b=b/2;
            }
            return res;
        }
    int countGoodNumbers(long long n) {
        long long eve=(n/2);
        long long odd=(n/2)+(n%2);
        long long k= ( pow_(5,odd)*pow_(4,eve))%1000000007;
        return (int)k;
    }
};