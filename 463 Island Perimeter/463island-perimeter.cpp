class Solution {
public:
    // int count(int n,vector<vector<int>>& a){
    //      for(i=0;i<a.size();i++){
    //         for(j=0;j<a[0].size();j++){
    //            if()
    //     }
    //     }
    // }
    int islandPerimeter(vector<vector<int>>& a) {
        int i,j;
        int sum=0;
        int n=a.size(),m=a[0].size();
        for(i=0;i<a.size();i++){
            for(j=0;j<a[0].size();j++){
               if(a[i][j]==1){
                if(i==0||a[i-1][j]==0)  sum++;
                if(j==0||a[i][j-1]==0) sum++;
                if(i==n-1||a[i+1][j]==0) sum++;
                if(j==m-1||a[i][j+1]==0) sum++;
               }
        }
        }
        return sum;
    }
};