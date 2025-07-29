class Solution {
public:
    int maxi(vector<vector<int>> matrix,int col){
        int i,j;
        int max=INT_MIN;
        for(i=0;i<matrix.size();i++){
            if(matrix[i][col]>max){
                max=matrix[i][col];
            }
        }
        return max;
    }
        int mini(vector<vector<int>> &matrix,int row){
        int i,j;
        int min=INT_MAX;
        for(i=0;i<matrix[0].size();i++){
            if(matrix[row][i]<min){
                min=matrix[row][i];
            }
        }
        return min;
    }
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int i,j;
      int numCols = matrix[0].size();

    vector<int>a;
        for(i=0;i<matrix.size();i++){
            for(j=0;j<numCols;j++){
                if (matrix[i][j] == mini(matrix, i) && matrix[i][j] == maxi(matrix, j))
{
                    a.push_back(matrix[i][j]);
                }
            }
        }
        return a;
    }
};