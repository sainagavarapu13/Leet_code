class Solution {
public:
    int minCost(vector<vector<int>>& a) {
        int n = a.size();
        int m =a[0].size();
       deque<pair<int,int>>dq;
       vector<vector<int>>graph(n,vector<int>(m,INT_MAX));
       graph[0][0]=0;
       dq.push_back({0,0});
        while(!dq.empty()){
            auto [x,y] = dq.front();
            dq.pop_front();
            //right side -> should be 1
            if(y+1<m){
                int cost;
                if(a[x][y]==1) cost = 0 ;
                else cost =1;
                if(graph[x][y]+cost<graph[x][y+1]){
                    graph[x][y+1] = graph[x][y]+cost;
                     if(cost == 0 ) dq.push_front({x,y+1});
                else dq.push_back({x,y+1});
                }
               
            }
            //left going it should be 2
            if(y-1>=0){
                int cost;
                if(a[x][y]==2) cost = 0 ;
                else cost =1;
                if(graph[x][y]+cost<graph[x][y-1]){
                    graph[x][y-1] = graph[x][y]+cost;
                    if(cost == 0 ) dq.push_front({x,y-1});
                else dq.push_back({x,y-1});
                }
                
            }
            //going up it should be 4
            if(x-1>=0){
                int cost;
                if(a[x][y]==4) cost = 0 ;
                else cost =1;
                if(graph[x][y]+cost<graph[x-1][y]){
                    graph[x-1][y] = graph[x][y]+cost;
                    if(cost == 0 ) dq.push_front({x-1,y});
                else dq.push_back({x-1,y});
                }
                
            }
            //going down it should be 3
            if(x+1<n){
                int cost;
                if(a[x][y]==3) cost = 0 ;
                else cost =1;
                if(graph[x][y]+cost<graph[x+1][y]){
                    graph[x+1][y] = graph[x][y]+cost;
                    if(cost == 0 ) dq.push_front({x+1,y});
                else dq.push_back({x+1,y});
                }
                
            }
        }
        return graph[n-1][m-1];
    }
};