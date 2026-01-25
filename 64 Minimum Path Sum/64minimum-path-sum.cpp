class Solution {
public:
    int minPathSum(vector<vector<int>>& a) {
        vector<vector<int>>g(a.size(),vector<int>(a[0].size(),INT_MAX));
        queue<pair<int,int>>q;
        int n=a.size();
        int m =a[0].size();
        g[0][0] = a[0][0];
        q.push({0,0});
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            //right
            if(y+1 < m){
                if(g[x][y]+a[x][y+1] < g[x][y+1]){
                    g[x][y+1] = g[x][y]+a[x][y+1];
                    q.push({x,y+1});
                }
            }
            //down
            if(x+1 < n){
                if(g[x][y]+a[x+1][y] < g[x+1][y]){
                    g[x+1][y] = g[x][y]+a[x+1][y];
                    q.push({x+1,y});
                }
            }
        }
        return g[n-1][m-1];
    }
};