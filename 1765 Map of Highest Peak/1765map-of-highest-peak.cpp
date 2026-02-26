class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& water) {
        int m = water.size(),n = water[0].size();
        vector<vector<int>>res(m,vector<int>(n,-1));
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(water[i][j]==1){
                    res[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            pair<int,int> a = q.front();
            q.pop();
            int x = a.first;
            int y = a.second;
            if(x+1<m && res[x+1][y]==-1){
                res[x+1][y] = res[x][y] + 1;
                q.push({x+1,y});
            }
            if(x-1>=0 && res[x-1][y]==-1){
                res[x-1][y] = res[x][y]+1;
                q.push({x-1,y});
            }
            if(y+1<n && res[x][y+1]==-1){
                res[x][y+1] = res[x][y] + 1;
                q.push({x,y+1});
            }
            if(y-1>=0 && res[x][y-1]==-1){
                res[x][y-1] = res[x][y]+1;
                q.push({x,y-1});
            }
        }
        return res;
    }
};