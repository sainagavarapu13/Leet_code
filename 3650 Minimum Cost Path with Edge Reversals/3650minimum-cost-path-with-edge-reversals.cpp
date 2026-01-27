class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> adj(n);

        for (auto &e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
            adj[e[1]].push_back({e[0], 2 * e[2]});
        }

        vector<long long> dist(n, LLONG_MAX);
        priority_queue<pair<long long,int>,
                       vector<pair<long long,int>>,
                       greater<>> pq;

        dist[0] = 0;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();
            if (d > dist[u]) continue;

            for (auto &[v, w] : adj[u]) {
                if (dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }

        return dist[n-1] == LLONG_MAX ? -1 : dist[n-1];
    }
};
