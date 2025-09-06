class Solution {
public:
    int firstCompleteIndex(vector<int>& a, vector<vector<int>>& b) {
        int n = b.size(), m = b[0].size();

        unordered_map<int, pair<int, int>> pos;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                pos[b[i][j]] = {i, j};
            }
        }

        vector<int> row(n, 0), col(m, 0);

        for (int p = 0; p < a.size(); ++p) {
            auto [i, j] = pos[a[p]];
            row[i]++;
            col[j]++;
            if (row[i] == m || col[j] == n) {
                return p;
            }
        }

        return -1;
    }
};
