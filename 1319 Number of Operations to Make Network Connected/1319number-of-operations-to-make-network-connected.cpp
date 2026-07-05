class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& a) {
        if(a.size()<n-1) return -1;
        vector<vector<int>>g(n);
        for(int i=0;i<a.size();i++){
            g[a[i][0]].push_back(a[i][1]);
            g[a[i][1]].push_back(a[i][0]);
        }
        vector<int>vis(n,0);
        queue<int>q;
        int comp=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                comp++;
                vis[i]=1;
                q.push(i);

                while(!q.empty()){
                    int node=q.front();
                    q.pop();

                    for(int nei:g[node]){
                        if(!vis[nei]){
                            vis[nei]=1;
                            q.push(nei);
                        }
                    }
                }
            }
        }

        return comp-1;
    }
};