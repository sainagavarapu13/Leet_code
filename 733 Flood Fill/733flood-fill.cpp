class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& a, int sr, int sc, int color) {
        int ch = a[sr][sc];
        if(ch==color) return a;
        int n=a.size();
        int m=a[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            a[x][y] = color;
            if(visited[x][y]==1) continue;
            visited[x][y]=1;
           if(y+1<m&&a[x][y+1]==ch && !visited[x][y + 1]){
            q.push({x,y+1});
            
           }
           if(y-1>=0&&a[x][y-1]==ch && !visited[x][y - 1]){
            q.push({x,y-1});
           }
           if(x+1<n&&a[x+1][y]==ch && !visited[x+1][y]){
            q.push({x+1,y});
           }
           if(x-1>=0&&a[x-1][y]==ch && !visited[x-1][y ]){
            q.push({x-1,y});
           }
        }
        return a;
    }
};