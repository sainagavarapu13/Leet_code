class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& land,
             int& r2, int& c2) {
        if (i < 0 || j < 0 ||
            i >= land.size() || j >= land[0].size() ||
            land[i][j] == 0)
            return;
        land[i][j] = 0; 
        r2 = max(r2, i);
        c2 = max(c2, j);

        dfs(i + 1, j, land, r2, c2);
        dfs(i - 1, j, land, r2, c2);
        dfs(i, j + 1, land, r2, c2);
        dfs(i, j - 1, land, r2, c2);
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        int n = land.size();
        int m = land[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (land[i][j] == 1) {
                    int r2 = i;
                    int c2 = j;
                dfs(i, j, land, r2, c2);
                    ans.push_back({i, j, r2, c2});
                }
            }
        }
        return ans;
    }
};