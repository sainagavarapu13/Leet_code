class Solution {
public:
    int shortestPathLength(vector<vector<int>>& a) {
        int n=a.size();
        int target = (1<<n)-1;
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(1<<n,0));
        for(int i=0;i<n;i++){
            int mask=(1<<i);
            vis[i][mask]=1;
            q.push({i,mask});
        }
        int ste=0;
        while(!q.empty()){
            int len =q.size();
            for(int i=0;i<len;i++){
                auto [x,y] = q.front();
                q.pop();
                if(y==target) return ste;
                for(auto i:a[x]){
                    int m = y| (1<<i);
                    if(vis[i][m]==0){
                        vis[i][m]=1;
                        q.push({i,m});
                    }
                }
            }
            ste++;
        }
        return -1;
    }
};