class Solution {
public:
    int maximumProduct(vector<int>& c) {
        sort(c.begin(), c.end());
        int n = c.size();
        int a = c[n - 1] * c[n - 2] * c[n - 3];
        int b = c[0] * c[1] * c[n - 1];
        return max(a, b);
    }
};