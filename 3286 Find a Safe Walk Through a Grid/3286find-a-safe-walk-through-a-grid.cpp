class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& a, int k) {
        int n=a.size();
        int m = a[0].size();
        vector<vector<int>>temp(n,vector<int>(m,-1));
        queue<tuple<int,int,int>>q;
       
        if(a[0][0]==1) k--;

        if(k<=0) return false;
         q.push({0,0,k});
         temp[0][0]=k;
        temp[0][0] = 1;
        vector<int>dx={0,0,1,-1};
        vector<int>dy={-1,1,0,0};
        while(!q.empty()){
            auto [x,y,z] = q.front();
            q.pop();
            if(x==n-1&&y==m-1) return true;
            for(int i=0;i<4;i++){
                int nx = x+dx[i];
                int ny = y+dy[i];
                if(nx<0||ny<0||nx>=n||ny>=m) continue;
                int nh = z-a[nx][ny];
                if(nh<=0) continue;
                if(nh>temp[nx][ny]){
                    q.push({nx,ny,nh});
                    temp[nx][ny]=nh;
                }
            }
        }
        return false;
    }
};