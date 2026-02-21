class Solution {
public:
    int countPrimeSetBits(int l, int r) {
        int total = 0;
        set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};
        
        for (int i = l; i <= r; i++) {
            int cnt = __builtin_popcount(i);
            if (primes.count(cnt)) {
                total++;
            }
        }
        return total;
    }
};