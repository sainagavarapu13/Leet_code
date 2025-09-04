class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& m) {
        int a = INT_MIN;
        vector<int>b(2);
        for( int i=0;i<m.size();i++)
        {
            for( int j = 0 ; j<m[0].size();j++){
                if( a < m[i][j]){
                    a = m[i][j];
                    b[0] = i;
                    b[1] = j;
                }
            }
        }
        return b;
    }
};