class Solution {
public:
    long long maximumScore(vector<int>& a) {
        int n = a.size();
        vector<int> suf(n);
        suf[n - 1] = a.back();
        long long sum = 0;
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = min(suf[i + 1], a[i]);
        }

        long long ma = LLONG_MIN;
        for (int i = 0; i < n-1; i++) {
            sum += a[i];
            ma = max(ma, sum - suf[i+1]);
        }

        return ma;
    }
};
