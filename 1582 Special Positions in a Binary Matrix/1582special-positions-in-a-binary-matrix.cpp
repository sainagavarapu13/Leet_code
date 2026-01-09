class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int a = 0,n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            int c=0,b=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    c++;
                    b = j;
                }
            }
            if(c==1){
                int d = 0;
                for(int k=0;k<n;k++){
                    if(mat[k][b]==1) d++;
                    if(d>1) break;
                }
                if(d==1) a++;
            }
        }
        return a;
    }
};