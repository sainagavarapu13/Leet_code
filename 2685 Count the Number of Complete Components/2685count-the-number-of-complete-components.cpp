class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& a) {
        vector<vector<int>> adj(n);
        for(auto& i:a){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        queue<int>q;
        int ans=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
           
            if(vis[i]==1) continue;
            vis[i]=1;
            q.push(i);
             int ed=0,cnt=0;
            while(!q.empty()){
                int p = q.front();
                ed+=(int)adj[p].size();
                cnt++;
                q.pop();
                for(auto& j:adj[p]){
                    if(vis[j]==0){
                        vis[j]=1;
                        q.push(j);
                    }
                }
            }
            ed=ed/2;
            if(ed==((cnt*(cnt-1))/2)){
                ans++;
            }
        }
        return ans;
    }
};