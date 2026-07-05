class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& a) {
        set<vector<vector<int>>>s;
        vector<vector<int>>f={{1,2,3},{4,5,0}};
        s.insert(a);
        queue<pair<vector<vector<int>>,int>>q;
        q.push({a,0});

        int x[]={0,0,-1,1};
        int y[]={-1,1,0,0};

        while(!q.empty()){
            auto [cr,c]=q.front();
            q.pop();
            if(cr==f) return c;
            int n,m;
            for(int i=0;i<2;i++){
                for(int j=0;j<3;j++){
                    if(cr[i][j]==0){
                        n=i;
                        m=j;
                    }
                }
            }
            for(int k=0;k<4;k++){
                int nx=n+x[k];
                int ny=m+y[k];
                if(nx<0||nx>=2||ny<0||ny>=3)
                    continue;
                vector<vector<int>>p=cr;
                swap(p[n][m],p[nx][ny]);
                if(!s.count(p)){
                    s.insert(p);
                    q.push({p,c+1});
                }
            }
        }
        return -1;
    }
};