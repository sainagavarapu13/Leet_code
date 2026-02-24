class Solution {
public:
    bool fun(int k,vector<vector<int>>&a){
        vector<vector<int>>grid(a.size() , vector<int>(a[0].size(),0));
        grid[0][0]=1;
        queue<pair<int,int>>q;
        q.push({0,0});
        int n=a.size();
        int m=a[0].size();
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
          if(x == n-1 && y == m-1)
            return true;
            if(x+1 < a.size() && grid[x+1][y] == 0){
                int cost = abs(a[x+1][y]-a[x][y]);
                if(cost <= k){
                    grid[x+1][y] = 1;
                    q.push({x+1,y});
                }
            }
            if(y+1 < a[0].size() && grid[x][y+1] == 0){
                int cost = abs(a[x][y+1]-a[x][y]);
                if(cost <= k){
                    grid[x][y+1] = 1;
                    q.push({x,y+1});
                }
            }
            if(x-1>=0&& grid[x-1][y] == 0){
                int cost = abs(a[x-1][y]-a[x][y]);
                if(cost <= k){
                    grid[x-1][y] = 1;
                    q.push({x-1,y});
                }
            }
            if(y-1 >=0 && grid[x][y-1] == 0){
                int cost = abs(a[x][y-1]-a[x][y]);
                if(cost <= k){
                    grid[x][y-1] = 1;
                    q.push({x,y-1});
                }
            }
        }
        return false;
    }
    int minimumEffortPath(vector<vector<int>>& a) {
        int start =0,end=1e6;
        while(start<end){
            int mid =(start+end)/2;
            if(fun(mid , a)){
                end=mid;

            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};