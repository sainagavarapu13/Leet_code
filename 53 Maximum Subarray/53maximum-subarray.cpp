class Solution {
public:
    int maxSubArray(vector<int>& n) {
        int ms = n[0];
        int cs = n[0];

        for (int i = 1; i < n.size(); i++) {
            cs = max(n[i], cs + n[i]);
            ms = max(ms, cs);
        }

        return ms;
    }
};
