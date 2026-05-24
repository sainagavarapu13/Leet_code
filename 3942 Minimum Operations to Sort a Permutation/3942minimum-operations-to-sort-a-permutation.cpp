class Solution {
public:
    int minOperations(vector<int>& a) {
        int n = a.size();
        int k = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                k = i;
                break;
            }
        }
        bool m = true;
        for (int i = 0; i < n; i++) {
            if (a[(k + i) % n] != i) {
                m = false;
                break;
            }
        }
        bool p = true;
        for (int i = 0; i < n; i++) {
            if (a[(k - i + n) % n] != i) {
                p = false;
                break;
            }
        }
        int x = INT_MAX;
        if (m) {
            int j = k;
            x = min(x, j);
            int l = (n - k) % n;
            x = min(x, 2 + l);
        }
        if (p) {
            int j = n - 1 - k;
            x = min(x, 1 + j);
            int l = (k + 1) % n;
            x = min(x, 1 + l);
        }
        return (x == INT_MAX) ? -1 : x;
    }
};