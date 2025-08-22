class Solution {
public:
    int minimumArea(vector<vector<int>>& g) {
        vector<int>a,b;
        int x= g.size();
        int y = g[0].size();
        for( int i=0;i<x;i++){
            for( int j =0;j<y;j++){
                if( g[i][j]==1) a.push_back(j);
                
            }
        }for( int i=0;i<y;i++){
            for( int j =0;j<x;j++){
                if( g[j][i]==1) b.push_back(j);
                
            }
        }
        if( a.empty() || b.empty()) return 0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int h = a.back()-a[0]+1;
        int w = b.back()-b[0]+1;
        return h*w;
        
    }
};