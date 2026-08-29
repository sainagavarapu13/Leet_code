class Solution {
public:
    void gameOfLife(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();

        vector<vector<int>> old = a;

        int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
        int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                int live = 0;

                // Count live neighbors from OLD board
                for (int k = 0; k < 8; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (x >= 0 && x < m && y >= 0 && y < n) {
                        if (old[x][y] == 1)
                            live++;
                    }
                }
                if (old[i][j] == 1) {
                    if (live < 2 || live > 3)
                        a[i][j] = 0;
                    else
                        a[i][j] = 1;
                } 
                else {
                    if (live == 3)
                        a[i][j] = 1;
                    else
                        a[i][j] = 0;
                }
            }
        }
    }
};
