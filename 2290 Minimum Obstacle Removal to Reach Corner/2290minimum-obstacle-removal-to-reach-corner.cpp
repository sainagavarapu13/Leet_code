class Solution {
public:
    int minimumObstacles(vector<vector<int>>& a) {
        int n=a.size();
        int m = a[0].size();
        vector<vector<int>>graph(n,vector<int>(m,INT_MAX));
        deque<pair<int,int>>dq;
        if(a[0][0]==0 )graph[0][0]=0;
        else graph[0][0]=1;
        dq.push_front({0, 0});

        while(!dq.empty()){
            auto [x,y] = dq.front();
            dq.pop_front();
            int cost;
          
            if(y+1<m){
                cost = a[x][y+1];
                if(graph[x][y]+cost < graph[x][y+1]){
                    graph[x][y+1]=graph[x][y]+cost;
                    if(cost==0) dq.push_front({x,y+1});
                    else dq.push_back({x,y+1});
                }
            }
           
            if(x-1>=0){
                cost = a[x-1][y];
                if(graph[x][y]+cost < graph[x-1][y]){
                    graph[x-1][y]=graph[x][y]+cost;
                    if(cost==0) dq.push_front({x-1,y});
                    else dq.push_back({x-1,y});
                }
            }
           
             if(y-1>=0){
                cost = a[x][y-1];
                if(graph[x][y]+cost < graph[x][y-1]){
                    graph[x][y-1]=graph[x][y]+cost;
                    if(cost==0) dq.push_front({x,y-1});
                    else dq.push_back({x,y-1});
                }
            }
             if(x+1<n){
                cost = a[x+1][y];
                if(graph[x][y]+cost < graph[x+1][y]){
                    graph[x+1][y]=graph[x][y]+cost;
                    if(cost==0) dq.push_front({x+1,y});
                    else dq.push_back({x+1,y});
                }
            }
        }
        return graph[n-1][m-1];
    }
};