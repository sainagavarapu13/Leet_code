class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int t=0, b = m.size()-1;
        int l = 0 , r = m[0].size()-1;
        vector<int>res;
        while( l<=r && t<=b){
            for( int i=l;i<=r;i++){
                    res.push_back(m[t][i]);
            }
            t++;
            if( t<=b){
                for( int i=t;i<=b;i++){
                    res.push_back(m[i][r]);
                }
                r--;
            }
            if(t<=b){
                for( int i=r;i>=l;i--){
                    res.push_back(m[b][i]);
                }
                b--;
            }
            if( l<=r){
                for( int i=b;i>=t;i--){
                    res.push_back(m[i][l]);
                }
                l++;
            }
        }
        return res;
    }
};