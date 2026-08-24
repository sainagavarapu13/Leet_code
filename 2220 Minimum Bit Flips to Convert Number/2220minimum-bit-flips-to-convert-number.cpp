class Solution {
public:
    int minBitFlips(int a, int b) {
        int m = max(a, b);
        int k = m;
        int cnt = 0;

        while (k) {
            cnt++;
            k >>= 1;
        }

        int mask = 1;
        int ans = 0;

        while (cnt--) {
            if ( (a & mask) != (b & mask) ) {
                ans++;
            }
            mask <<= 1;
        }

        return ans;
    }
};
