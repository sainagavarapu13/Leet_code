class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& a) {
        vector<vector<int>>b(a[0].size(),vector<int>(a.size()));
        for( int i=0;i<a.size();i++){
            for( int j =0;j<a[0].size();j++){
               b[j][i]= a[i][j];
            }
        }
       return b; 
    }
};