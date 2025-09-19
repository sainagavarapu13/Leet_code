class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& a) {
        int i,j;
        int m=-2;
        for(i=0;i<a[0].size();i++){
            m=-2;
            for(j=0;j<a.size();j++){
                m=max(m,a[j][i]);
            }
             for(j=0;j<a.size();j++){
               if(a[j][i]==-1){
                a[j][i]=m;
               }
            }
        }
        return a;
    }
};