class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
         vector<vector<int>>viss(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            vis[0][i]++;
            q.push({0,i});
        }
        for(int i=1;i<n;i++){
            vis[i][0]++;
            q.push({i,0});
        }
        vector<int>dx={1,-1,0,0};
        vector<int>dy = {0,0,1,-1};
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int nx = x+dx[k];
                int ny = y+dy[k];
                if(nx<0||ny<0||nx>=a.size()||ny>=a[0].size()||a[nx][ny]<a[x][y]||vis[nx][ny]) continue;
                q.push({nx,ny});
                vis[nx][ny]++; 
            }
        }

        for(int i=0;i<n;i++){
            viss[i][m-1]++;
            q.push({i,m-1});
        }
        for(int i=m-2;i>=0;i--){
            viss[n-1][i]++;
            q.push({n-1,i});
        }
         while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int nx = x+dx[k];
                int ny = y+dy[k];
                if(nx<0||ny<0||nx>=a.size()||ny>=a[0].size()||a[nx][ny]<a[x][y]||viss[nx][ny]) continue;
                q.push({nx,ny});
                viss[nx][ny]++; 
            }
        }
        vector<vector<int>>ans;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
               if(vis[i][j]==1&&viss[i][j]==1){
                ans.push_back({i,j});
               }
            }
        }
        return ans;
    }
};