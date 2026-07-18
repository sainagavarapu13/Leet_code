class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        long long c = n, d = m;
        long long a = 1LL *s + (1LL*(c)/2) * 1LL * (d-1) +1;
        long long b = 1LL *s + (1LL*c/2)*1LL * (d-1);
        return max(a,b);
    }
};