class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        deque<pair<int, int>>dq;
        vector<vector<int>>bfs(grid.size(),vector<int>(grid[0].size(),INT_MAX));
        bfs[0][0]=0;
        dq.push_front({0,0});
        while(!dq.empty()){
            int cost;
            auto [x,y] = dq.front();
            dq.pop_front();
            // left -> right
            if( y+1 <grid[0].size()){
                    if( grid[x][y]==1){
                            cost =0;
                    }else{
                        cost =1;
                    }
                  if( bfs[x][y]+cost < bfs[x][y+1]){
                        bfs[x][y+1] = bfs[x][y]+cost;
                        if( cost ==0){
                            dq.push_front({x,y+1});
                        }else{
                            dq.push_back({x,y+1});
                        }
                  }

            }
            // top -> bottom
            if( x+1 <grid.size()){
                    if( grid[x][y]==3){
                            cost =0;
                    }else{
                        cost =1;
                    }
                  if( bfs[x][y]+cost < bfs[x+1][y]){
                        bfs[x+1][y] = bfs[x][y]+cost;
                        if( cost ==0){
                            dq.push_front({x+1,y});
                        }else{
                            dq.push_back({x+1,y});
                        }
                  }

            }
            // bottom -> top
               if( x-1 >=0){
                    if( grid[x][y]==4){
                            cost =0;
                    }else{
                        cost =1;
                    }
                  if( bfs[x][y]+cost < bfs[x-1][y]){
                        bfs[x-1][y] = bfs[x][y]+cost;
                        if( cost ==0){
                            dq.push_front({x-1,y});
                        }else{
                            dq.push_back({x-1,y});
                        }
                  }

            }
            // right -> left
              
             if( y-1 >=0){
                    if( grid[x][y]==2){
                            cost =0;
                    }else{
                        cost =1;
                    }
                  if( bfs[x][y]+cost < bfs[x][y-1]){
                        bfs[x][y-1] = bfs[x][y]+cost;
                        if( cost ==0){
                            dq.push_front({x,y-1});
                        }else{
                            dq.push_back({x,y-1});
                        }
                  }

            }


        }
        return bfs[grid.size()-1][grid[0].size()-1];


    }
};