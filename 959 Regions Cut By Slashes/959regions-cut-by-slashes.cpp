class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& grid) {
        int n = grid.size();
        if (i < 0 || j < 0 || i >= n || j >= n || grid[i][j] == 1)
            return;
        grid[i][j] = 1;
        dfs(i + 1, j, grid);
        dfs(i - 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
    }
    int regionsBySlashes(vector<string>& g) {
        int n = g.size();
        vector<vector<int>> grid(3 * n, vector<int>(3 * n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (g[i][j] == '/') {
                    grid[3 * i][3 * j + 2] = 1;
                    grid[3 * i + 1][3 * j + 1] = 1;
                    grid[3 * i + 2][3 * j] = 1;
                }
                else if (g[i][j] == '\\') {
                    grid[3 * i][3 * j] = 1;
                    grid[3 * i + 1][3 * j + 1] = 1;
                    grid[3 * i + 2][3 * j + 2] = 1;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < 3 * n; i++) {
            for (int j = 0; j < 3 * n; j++) {
                if (grid[i][j] == 0) {
                    ans++;
                    dfs(i, j, grid);
                }
            }
        }
        return ans;
    }
};