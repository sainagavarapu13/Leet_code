class Solution {
public:
    int dfs(int u, vector<vector<int>>& adj, vector<int>& vis) {
        vis[u] = 1;
        int cnt = 1;
        for (int v : adj[u]) {
            if (!vis[v]) {
                cnt += dfs(v, adj, vis);
            }
        }
        return cnt;
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++) {
            long long x1 = bombs[i][0];
            long long y1 = bombs[i][1];
            long long r = bombs[i][2];
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                long long dx = x1 - bombs[j][0];
                long long dy = y1 - bombs[j][1];
                if (dx * dx + dy * dy <= r * r) {
                    adj[i].push_back(j);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            vector<int> vis(n, 0);
            ans = max(ans, dfs(i, adj, vis));
        }
        return ans;
    }
};