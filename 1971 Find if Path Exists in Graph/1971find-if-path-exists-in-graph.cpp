class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(auto& i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        queue<int>q;
        vector<int>vis(n,0);
        q.push(source);
        while(!q.empty()){
            int x=q.front();
            q.pop();
            if(x==destination) return true;
            for(auto& i:adj[x]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=1;
                }
            }
        }
        return false;
    }
};