class Solution {
public:
    vector<vector<int>> dp;

    int check(int idx, int last, vector<int>& a) {
        if (idx == a.size())
            return 0;

        if (dp[idx][last + 1] != -1)
            return dp[idx][last + 1];

        int take = 0;
        if (last == -1 || a[last] < a[idx])
            take = 1 + check(idx + 1, idx, a);

        int notTake = check(idx + 1, last, a);

        return dp[idx][last + 1] = max(take, notTake);
    }

    int lengthOfLIS(vector<int>& a) {
        int n = a.size();
        dp.assign(n, vector<int>(n + 1, -1));
        return check(0, -1, a);
    }
};