class Solution {
public:
    int concatenatedBinary(int n) {
        long long a = 1;
        int mod = 1e9+7;
        for( int i=2;i<=n;i++){
            int l = floor(log2(i))+1;
            a = ( a<<l)|i;
            a%=mod;
        }
        return a;
    }
};