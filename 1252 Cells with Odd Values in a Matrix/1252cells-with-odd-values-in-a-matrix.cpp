class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> a (m,vector<int>(n,0));
        for(int i=0;i<indices.size();i++){
            for(int j=0;j<1;j++){
                int b = indices[i][0];
                int c = indices[i][1];
                for(int k=0;k<n;k++){
                    a[b][k]++;
                }
                for(int l=0;l<m;l++){
                    a[l][c]++;
                }
            }
        }
        int e=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]%2!=0) e++;
            }
        }
        return e;
    }
};