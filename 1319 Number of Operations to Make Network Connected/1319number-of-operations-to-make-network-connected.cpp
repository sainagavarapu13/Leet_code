class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& a) {
        vector<vector<int>>adj(n);
        int sz = a.size();
        if(sz<n-1) return -1;
        for(auto& i:a){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        queue<int>q;
        vector<int>vis(n,0);
        int cnt=0;
        for(int j=0;j<vis.size();j++){
            if(vis[j]==1) continue;
            q.push(j);
            vis[j]=1;
             while(!q.empty()){
            int p = q.front();
            q.pop();
            for(auto& i:adj[p]){
                if(vis[i]==0){
                    vis[i]=1;
                    q.push(i);
                }
            }
            }
        cnt++;
        }
       
       return cnt-1;
    }
};