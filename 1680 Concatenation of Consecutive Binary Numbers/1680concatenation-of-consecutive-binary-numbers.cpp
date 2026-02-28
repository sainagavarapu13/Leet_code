class Solution {
public:
    int concatenatedBinary(int n) {
        int mod = 1e9 + 7;
        long long res = 1;
        for(int i=2;i<=n;i++){
            int d = bit_width((unsigned)i);
            res =  (res<<d) | i;
            res = res %mod;
        }
        return res;
    }
};