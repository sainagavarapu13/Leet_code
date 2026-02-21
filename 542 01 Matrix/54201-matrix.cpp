class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& a) {
         queue<tuple<int,int,int>>q;
         vector<vector<int>>ans(a.size(),vector<int>(a[0].size(),-1));
        int n=a.size();
        int m=a[0].size();
         int fresh = 0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==0){
                    q.push({i,j,0});
                    ans[i][j] = 0; 
                }
            }
        }
        while(!q.empty()){
            auto[x,y,z] = q.front();
            q.pop();
           
            if(x+1 < n && ans[x+1][y] == -1){
                ans[x+1][y] =z+1;
                q.push({x+1, y, z+1});
            }
            if(y+1 < m  && ans[x][y+1] == -1){
               ans[x][y+1] = z+1;
               q.push({x, y+1, z+1});
            }
            if(y-1>=0&& ans[x][y-1]==-1){
               ans[x][y-1] = z+1;
               q.push({x, y-1, z+1});
            }
             if(x-1 >=0 && ans[x-1][y]==-1){
              ans[x-1][y] = z+1;
              q.push({x-1, y, z+1});
            }
           
        }
        return ans;
    }
};