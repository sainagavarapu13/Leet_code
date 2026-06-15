class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        vector<vector<int>>temp(n,vector<int>(m,0));
       
            for(int j=0;j<m;j++){
                
                if(a[0][j]==1){
                   break;
                }
                temp[0][j]=1;
            }
            for(int i=0;i<n;i++){
                if(a[i][0]==1){
                    break;
                }
                 temp[i][0]=1;

            }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[i][j]==1){
                    temp[i][j]=0;
                }
                else{
                    temp[i][j]=temp[i-1][j]+temp[i][j-1];
                }
            }
        }
        return temp[n-1][m-1];
    }
};