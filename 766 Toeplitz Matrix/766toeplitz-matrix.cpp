class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& a) {
        int i,j;
        for(i=1;i<a.size();i++){
            for(j=1;j<a[0].size();j++){
                if(a[i][j]!=a[i-1][j-1]) return 0;
            }
        }
        return 1;
    }
};