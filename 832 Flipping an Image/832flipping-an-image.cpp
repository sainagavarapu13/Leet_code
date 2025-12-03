class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        int i,j;
        int n=a[0].size()-1;
       for(i=0;i<a.size();i++){
        for(j=0;j<(n+1)/2;j++){
            
            int temp=a[i][j];
            a[i][j]=a[i][n-j];
            a[i][n-j]=temp;
           
        }
       }
        for(i=0;i<a.size();i++){
        for(j=0;j<a.size();j++){
           a[i][j]=1-a[i][j];
        }
       }
       return a;
    }
};