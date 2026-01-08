class Solution {
public:
    int z = 0;
    void fun(vector<vector<int>> g,int i,int j){
        vector<vector<int>> v(3,vector<int> (3,0));
        map<int,int> m;
        map<int,int> f;
        int h = 0;
        for(int k=i;k<i+3;k++){
            int d = 0;
            for(int l=j;l<j+3;l++){
                // cout<<d<<endl;
                v[h][d++] = g[k][l];
                // cout<<v[h][d-1]<<" ";
                m[g[k][l]]++;
                if(g[k][l]>9 || g[k][l]<1){
                    return;
                }
            }
            // cout<<endl;
            h++;
        }
        if(m.size()!=9) return;
        int a = 0,b = 0;
        for(int k=0;k<3;k++){
                a += v[k][k];
                b += v[k][2-k];
                int rt =0,ct = 0;
            for(int x = 0;x<3;x++){
                rt += v[k][x];
                ct += v[x][k];
            }
            f[rt]++;
            f[ct]++;
        }
        f[a]++;
        f[b]++;
        if(f[a]==8) z++;
        
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n =grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i<=n-3 && j<=m-3){
                    fun(grid,i,j);
                    // cout<<"called"<<endl;
                }
            }
        }
        return z;
    }
};