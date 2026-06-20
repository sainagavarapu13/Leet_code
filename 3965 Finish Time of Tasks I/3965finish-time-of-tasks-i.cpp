class Solution {
public:
    long long dfs(int u, vector<vector<int>>& g, vector<int>& b) {
        if (g[u].empty()) return b[u];
        long long mn = LLONG_MAX, mx = 0;
        for (int v : g[u]) {
            long long t = dfs(v, g, b);
            mn = min(mn, t);
            mx = max(mx, t);
        }
        return mx + (mx - mn) + b[u];
    }

    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& b) {
        vector<vector<int>> g(n);
        for (auto &e : edges) {
            g[e[0]].push_back(e[1]);
        }
        return dfs(0, g, b);
    }
};