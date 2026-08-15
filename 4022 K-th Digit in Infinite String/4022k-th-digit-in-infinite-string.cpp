class Solution {
public:
    int kthDigit(long long k) {
        if(k<=9) return k;
        k -= 10;
        long long p = 1,d = 2;
        while(k>=90*p*d){
            k-=90*p*d;
            d++;
            p *=10;
        }
        long long b = k/(10*d) + p;
        long long i = (k%(10*d))/d;
        long long j = k%d;
        long long num = 10*b + (b%2==0 ? i : 9-i);
        long long s = d-j-1;
        while(s>0){
            num /= 10;
            s--;
        }
        return num%10;
    }
};