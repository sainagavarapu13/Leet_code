class Solution {
public:
    vector<long long>bfs(int start , vector<vector<int>>adj){
       int n=adj.size();
        vector<long long>dist(n,-1);
        dist[start]=0;
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto& connected : adj[node]){
                if(dist[connected]==-1){
                   dist[connected]= dist[node]+1;
                    q.push(connected);
                }
            }
        }
        return dist;
    }
    int specialNodes(int n, vector<vector<int>>& edges, int x, int y, int z) {
        vector<vector<int>>adj(n);
        for(auto& e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<long long>x_dist = bfs(x,adj);
        vector<long long>y_dist = bfs(y,adj);
        vector<long long>z_dist = bfs(z,adj);
        int cnt=0;
        for(int i=0;i<n;i++){
            vector<long long>d = {x_dist[i] , y_dist[i] , z_dist[i]};
            if (d[0] == -1 || d[1] == -1 || d[2] == -1) {
                continue;
            }
            sort(d.begin(),d.end());
            if(d[0]*d[0] + d[1]*d[1] == d[2]*d[2]){
                cnt++;
            }
        }
        return cnt;
    }
};