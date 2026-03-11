class Solution {
public:
int cnt=0;
    void fun(pair<int,int> p ,pair<int,int> e, vector<vector<int>>& g,int rem){
        if( p.first >=g.size()||p.second >=g[0].size() || p.first <0 || p.second <0) return;
        if( g[p.first][p.second]==-1) return;
        if( e ==p){
            if(rem==0) cnt++;
            return;
        }

        int x = p.first;
        int y = p.second;
        int t = g[x][y];
        g[x][y] = -1;

        fun( {x+1,y},e,g,rem-1);
        fun( {x-1,y},e,g,rem-1);
        fun( {x,y+1},e,g,rem-1);
        fun( {x,y-1},e,g,rem-1);

        g[x][y] = t;
    }
    int uniquePathsIII(vector<vector<int>>& g) {
        pair<int,int>f,e;
        int rem=0;
        for( int i=0;i<g.size();i++){
            for( int j=0;j<g[0].size();j++){
                if( g[i][j]!=-1) rem++;
                if( g[i][j]==1) f = {i,j};
                if( g[i][j]==2) e = {i,j};
            }
        }
        fun(f,e,g,rem-1);
        return cnt;
    }
};