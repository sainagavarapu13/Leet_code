class Solution {
public:
    int minimumCost(vector<int>& a, int k) {
      
            const long long MOD = 1000000007;

        long long r = k;
        long long cost = 0;
        long long p = 1;

        for (int i = 0; i < a.size(); i++) {

            if (a[i] > r) {

                long long rem = a[i] - r;
                long long add = (rem + k - 1) / k;

                __int128 first = p;
                __int128 last = p + add - 1;
                __int128 cnt = add;

                __int128 sum = (first + last) * cnt / 2;

                cost = (cost + (long long)(sum % MOD)) % MOD;

                p += add;
                r += add * 1LL * k;
            }

            r -= a[i];
        }

        return cost;
    }
};