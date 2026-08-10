class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& g, int k){
        vector<vector<int>>b = g;
        int len = g[0].size()*g.size();
        k = k%len;
        while(k--){
            vector<vector<int>>r = b;
            for( int i=0;i<g.size();i++){
                for( int j=0;j<g[0].size();j++ ){
                    if( j ==g[0].size()-1){
                        if( i==g.size()-1) r[0][0]=b[i][j];
                        else r[i+1][0]=b[i][j];
                    }else{
                        r[i][j+1]=b[i][j];
                    }
                }
            }
            b = r;
        }
        return b;
    }
};