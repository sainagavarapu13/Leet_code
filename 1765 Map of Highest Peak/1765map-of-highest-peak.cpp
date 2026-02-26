class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& a) {
        vector<vector<int>>ans(a.size(),vector<int>(a[0].size(),-1));
        queue<pair<int,int>>q;
        int n=a.size();
        int m=a[0].size();
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==1){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            auto [x,y] =q.front();
            q.pop();
            
            if(x+1 < n&& ans[x+1][y]==-1){
                ans[x+1][y] = ans[x][y]+1;
                q.push({x+1,y});
            }
            if(x-1 >=0&& ans[x-1][y]==-1){
                ans[x-1][y] = ans[x][y]+1;
                q.push({x-1,y});
            }
            if(y+1 < m&& ans[x][y+1]==-1){
                ans[x][y+1] = ans[x][y]+1;
                q.push({x,y+1});
            }
            if(y-1 >=0 && ans[x][y-1]==-1){
                ans[x][y-1] = ans[x][y]+1;
                q.push({x,y-1});
            }
        }
        return ans;
    }
};