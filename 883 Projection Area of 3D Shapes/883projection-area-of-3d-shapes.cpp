class Solution {
public:
    int projectionArea(vector<vector<int>>& a) {
        int ans =0;
        for( int i=0;i<a.size();i++){
            int r=0;
            int c=0;
            for( int j =0;j<a.size();j++){
                if( a[i][j] >0) ans++;
                c= max( c, a[i][j]);
                r = max( r, a[j][i]);
            }
            ans= ans+c+r;
        }
        return ans;
    }
};