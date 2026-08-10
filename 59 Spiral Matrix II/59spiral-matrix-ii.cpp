class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top=0,bottom=n-1,left=0,right=n-1;
       vector<vector<int>>ans(n,vector<int>(n));
        int i,j,k,l;
        int num=1;
        while(top<=bottom&&left<=right){
            for(j=left;j<=right;j++){
                ans[top][j]=num;
                num++;
            }
            top++;
            for(i=top;i<=bottom;i++){
                 ans[i][right]=num;
                num++;
            }
           
            right--;
            if(top<=bottom){
                for(k=right;k>=left;k--){
                ans[bottom][k]=num;
                num++;
            }
            bottom--;
            }
            
            if(left<=right){
            for(l=bottom;l>=top;l--){
                ans[l][left]=num;
                num++;
            }
            left++;
            }
        }
       return ans;
    }
};