class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& a) {
        vector<vector<int>>m(a.size(),vector<int>(a.size(),-1));
        int n=a.size();
        if(a[0][0]==1||a[n-1][n-1] == 1) return -1;
        m[0][0]=1;
    
        queue<pair<int,int>>q;
        q.push({0,0});
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            if(x+1 < n){
                if(a[x+1][y] == 0){
                    if(m[x+1][y]==-1){
                        m[x+1][y]=m[x][y]+1;
                        q.push({x+1,y});
                    }
                }
            }
            if(y+1 < n){
                if(a[x][y+1] == 0){
                    if(m[x][y+1]==-1){
                        m[x][y+1]=m[x][y]+1;
                        q.push({x,y+1});
                    }
                }
            }
            if(x-1 >=0){
                if(a[x-1][y] == 0){
                    if(m[x-1][y]==-1){
                        m[x-1][y]=m[x][y]+1;
                        q.push({x-1,y});
                    }
                }
            }
            if(y-1 >=0){
                if(a[x][y-1] == 0){
                    if(m[x][y-1]==-1){
                        m[x][y-1]=m[x][y]+1;
                        q.push({x,y-1});
                    }
                }
            }
            if(x+1 < n && y+1<n){
                if(a[x+1][y+1] == 0){
                    if(m[x+1][y+1]==-1){
                        m[x+1][y+1]=m[x][y]+1;
                        q.push({x+1,y+1});
                    }
                }
            }
             if(x-1 >=0 && y+1<n){
                if(a[x-1][y+1] == 0){
                    if(m[x-1][y+1]==-1){
                        m[x-1][y+1]=m[x][y]+1;
                        q.push({x-1,y+1});
                    }
                }
            }
             if(x+1 < n && y-1>=0){
                if(a[x+1][y-1] == 0){
                    if(m[x+1][y-1]==-1){
                        m[x+1][y-1]=m[x][y]+1;
                        q.push({x+1,y-1});
                    }
                }
            }
             if(x-1 >=0  && y-1>=0){
                if(a[x-1][y-1] == 0){
                    if(m[x-1][y-1]==-1){
                        m[x-1][y-1]=m[x][y]+1;
                        q.push({x-1,y-1});
                    }
                }
            }
        }
        return m[n-1][n-1];
    }
};