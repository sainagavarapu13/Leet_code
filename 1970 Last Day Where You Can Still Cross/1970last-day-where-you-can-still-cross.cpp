class Solution {
public:
    bool fun( int mid , vector<vector<int>>& cells, int r, int c){
        vector<vector<int>> grid(r, vector<int>(c, 1));
        for (int i = 0; i < mid; i++) {
            int x = cells[i][0] - 1;
            int y = cells[i][1] - 1;
            grid[x][y] = 0;
        }
        queue<pair<int,int>> q;
        vector<vector<int>> vis(r, vector<int>(c, 0));
        for (int j = 0; j < c; j++) {
            if (grid[0][j]) {
                q.push({0, j});
                vis[0][j] = 1;
            }
        }
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            if (x == r - 1)
                return true;
            for (int k = 0; k < 4; k++) {
                int nx = x + dr[k];
                int ny = y + dc[k];
                if (nx >= 0 && nx < r && ny >= 0 && ny < c &&
                    !vis[nx][ny] && grid[nx][ny]) {
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }

        return false;
    }
    int latestDayToCross(int row, int col, vector<vector<int>>& a) {
        int l =1, h = a.size()-1;
        int ans;
        while( l<=h){
           int mid = l+(h-l)/2;
            if( fun( mid, a, row, col)){
                ans = mid;
                l = mid+1;
            }else h = mid-1;
        }
        return ans;
    }
};