class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& a) {
        int i,j;
        for(i=0;i<a.size();i++){
            for(j=0;j<a.size();j++){
                if(i==j||i+j==(a.size()-1)){
                    if(a[i][j]==0) return 0;
                }
                else if(a[i][j]!=0) return 0;
            }
        }
        return 1;
    }
};