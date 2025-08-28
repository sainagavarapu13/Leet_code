class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& g) {
        vector<int>r,c;
        
        for( int i=0;i<g.size();i++){
            int m = INT_MIN , n = INT_MIN;
            for( int j=0;j<g.size();j++){
                m = max(m,g[j][i]);
                n = max( n, g[i][j]);
            }
            r.push_back(n);
            c.push_back(m);
        }
        int sum =0;
        for( int i=0;i<g.size();i++){
            for( int j =0;j<g.size();j++){
                int k = min(r[i] , c[j]);
                sum+=k-g[i][j];
            }
        }
        return sum;
    }
};