class Solution {
public:
    int networkDelayTime(vector<vector<int>>& t, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto e : t){
            adj[e[0]].push_back({e[1],e[2]});
        }
        vector<int> d(n+1,INT_MAX);
        d[k] = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        p.push({0,k});
        while(!p.empty()){
            int a = p.top().first;
            int u = p.top().second;
            p.pop();
            if(a>d[u]) continue;
            for(auto e : adj[u]){
                int v = e.first;
                int w = e.second;
                if(d[u]+w<d[v]){
                    d[v] = d[u]+w;
                    p.push({d[v],v});
                }
            }
        }
        int a = 0;
        for(int i=1;i<=n;i++){
            if(d[i]==INT_MAX) return -1;
            else a = max(a,d[i]);
        }
        return a;
    }
};