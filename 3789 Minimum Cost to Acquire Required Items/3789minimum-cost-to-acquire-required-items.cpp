class Solution {
public:
    long long minimumCost(int a, int b, int c, int n, int m) {
        long long ans = LLONG_MAX;
        ans = min(ans, 1LL * n * a + 1LL * m * b);
        long long common = min(n, m);
        ans = min(ans,
                  common * c
                + 1LL * (n - common) * a
                + 1LL * (m - common) * b);
        long long extra = max(n, m);
        ans = min(ans, extra * c);

        return ans;
    }
};
