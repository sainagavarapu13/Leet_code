class Solution {
public:
    void set(int row, int col,vector<vector<int>>& mat){
        int i,j;
        for(i=0;i<mat.size();i++){
            for(j=0;j<mat[0].size();j++){
                if(i==row||j==col){
                    mat[i][j]=0;
                }
            }
        }
    }
    void setZeroes(vector<vector<int>>& a) {
        int i,j;
        vector<vector<int>> b;
        int len=a.size();
        int k=0;
        while(len--){
            b.push_back(a[k]);
            k++;
        }
        for(i=0;i<b.size();i++){
            for(j=0;j<b[0].size();j++){
                if(b[i][j]==0){
                    
                    cout<<i<<" "<<j<<" ";
                    set(i,j,a);
                }
            }
        }
    }
};