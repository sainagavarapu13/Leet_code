class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& b) {
        vector<vector<int>>a(b.size(),vector<int>(b[0].size()));
        for( int i=0;i<b.size();i++){
            int k=0;
            for(int j = b[0].size()-1;j>=0 && k <b[0].size();j--){
                a[i][k++]=(b[i][j]==0)?1:0;
            }
        }
      return a;
        
    }
};