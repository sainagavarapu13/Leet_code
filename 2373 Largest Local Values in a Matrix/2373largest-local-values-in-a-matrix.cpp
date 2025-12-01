class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& a) {
        int i,j,m=-1,k,l;
         vector<vector<int>>mat;
         vector<int>v;
        for(k=0;k<a.size()-2;k++){
            for(l=0;l<a.size()-2;l++){
                  m=-1;
                for(i=k;i<k+3;i++){
                  
                  for(j=l;j<l+3;j++){
                m=max(m,a[i][j]);
            }
            }
            v.push_back(m);
            }
        mat.push_back(v);
        v.clear();
    }
        
        return mat;
    }
};