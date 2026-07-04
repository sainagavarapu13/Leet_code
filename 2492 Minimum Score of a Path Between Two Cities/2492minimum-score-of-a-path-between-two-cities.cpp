class Solution {
public:
    int minScore(int n, vector<vector<int>>& a) {
       vector<vector<pair<int,int>>>adj(n+1);
        for(auto & i :a){
            adj[i[0]].push_back({i[1],i[2]});
             adj[i[1]].push_back({i[0],i[2]});
        }
        queue<tuple<int,int>>q;
        q.push({1,INT_MAX});
        int mini=INT_MAX;
        vector<int>vis(n+1,0);
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            if(vis[x]==1) continue;
            vis[x]=1;
            for(auto& i:adj[x]){
                mini=min(mini,i.second);
                q.push({i.first,min(i.second,y)});
            }
        }
        return mini;
    }
};