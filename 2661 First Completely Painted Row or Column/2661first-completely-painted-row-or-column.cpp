class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        unordered_map<int, pair<int, int>> pos;
        vector<int> rowCount(m, 0), colCount(n, 0);

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                pos[mat[i][j]] = {i, j};

        for (int k = 0; k < arr.size(); ++k) {
            auto [i, j] = pos[arr[k]];
            if (++rowCount[i] == n || ++colCount[j] == m)
                return k;
        }

        return -1;
    }
};