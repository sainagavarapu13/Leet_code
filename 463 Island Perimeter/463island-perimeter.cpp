class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    ans += 4;
                    for (int k = 0; k < 4; k++) {
                        int ni = i + dr[k];
                        int nj = j + dc[k];
                        if (ni >= 0 && ni < m &&
                            nj >= 0 && nj < n &&
                            grid[ni][nj] == 1)
                            ans--;
                    }
                }
            }
        }

        return ans;
    }
};