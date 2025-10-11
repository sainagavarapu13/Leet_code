class Solution {
public:
    int longestSubarray(vector<int>& a) {
        int n = a.size();
        if (n <= 2) return n;

        int m = 2;
        int r = 2; 

        for (int i = 2; i < n; i++) {
            if (a[i] == a[i - 1] + a[i - 2]) {
                r++;
            } else {
                r = 2;
            }
            m = max(m, r);
        }

        return m;
    }
};
