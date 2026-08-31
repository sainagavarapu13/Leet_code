class Solution {
public:
    long long lcm(long long a, long long b){
            return (a*b)/gcd(a,b);
    }
    long long fun( long long a, long long b , long long c, long long n , long long m){
        long long ans = m/a;
        ans+=(m/b);
        ans+=(m/c);
        ans-=(m/lcm(a,b));
        ans-=(m/lcm(b,c));
        ans-=(m/lcm(c,a));
        ans+=(m/lcm(c,lcm(a, b)));
        return ans>=n;
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        long long l = 0;
        long long h = 2*1e9;
        while(l<h){
            long long mid = (l+h)/2;
            if( fun( a, b,c,n,mid)){
                h = mid;
            }else{
                l = mid+1;
            }
        }
        return l;
    }
};