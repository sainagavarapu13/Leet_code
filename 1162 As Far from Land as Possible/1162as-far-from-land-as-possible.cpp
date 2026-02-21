class Solution {
public:
    int maxDistance(vector<vector<int>>& a) {
          queue<tuple<int,int,int>>q;
        int n=a.size();
        int m=a[0].size();
        int o=0,z=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]==1){
                    q.push({i,j,0});
                    o++;
                }
                else{
                    z++;
                }
            }
        }
        if(z==0||o==0) return -1;
        int maxi=0;
        while(!q.empty()){
            auto[x,y,z] = q.front();
            q.pop();
            maxi=max(maxi,z);
            if(x+1 < n){
                if(a[x+1][y]==0){
                    a[x+1][y]=1;
                    q.push({x+1 ,y,z+1});
                }
            }
            if(y+1 < m){
                if(a[x][y+1]==0){
                    a[x][y+1]=1;
                    q.push({x,y+1,z+1});
                }
            }
            if(y-1>=0){
                if(a[x][y-1]==0){
                  a[x][y-1]=1;
                    q.push({x,y-1,z+1});
                }
            }
             if(x-1 >=0){
                if(a[x-1][y]==0){
                    a[x-1][y]=1;
                    q.push({x-1 ,y,z+1});
                }
            }
        }
        return maxi;
    }
};