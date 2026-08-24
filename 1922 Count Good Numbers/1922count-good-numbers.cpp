class Solution {
public:
    const long long MOD = 1e9 + 7;

    // Fast modular exponentiation
    long long modPow(long long base, long long exp) {
        long long result = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp & 1)
                result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2; 
        long long odd  = n / 2;       

        long long ans = (modPow(5, even) * modPow(4, odd)) % MOD;
        return (int)ans;
    }
};
