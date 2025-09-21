int maxi(vector<vector<int>> m,int j){
    int a = m[0][j];
    for(int i=0;i<m.size();i++){
        if(a<m[i][j]){
            a = m[i][j];
        }
    }
    return a;
}
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==-1){
                    int b = maxi(matrix,j);
                    matrix[i][j] = b;
                }
            }
        }
        return matrix;
    }
};