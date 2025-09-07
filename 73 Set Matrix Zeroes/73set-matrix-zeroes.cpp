class Solution {
public:
    void setZeroes(vector<vector<int>>& r) {
        vector<pair<int , int>>a;
        int m = r.size();
        int n = r[0].size();
        for(int j=0;j<r.size();j++){
            for( int i=0;i<r[0].size();i++){
                if( r[j][i]==0){
                    a.push_back({j,i});
                }
            }
        }
        for( auto& [x,y] : a){
            for( int i=0;i<n;i++){
                r[x][i]=0;
            }for( int i=0;i<m;i++){
                r[i][y]=0;
            }
        }
    }
};