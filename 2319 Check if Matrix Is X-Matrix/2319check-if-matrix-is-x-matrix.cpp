class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& a) {
        for( int i=0;i<a.size();i++){
            for( int j = 0;j<a.size();j++){
                if( j==i && a[i][j]==0) return 0;
                if(j+i == a.size()-1 && a[i][j]==0) return 0;
                if(  j+i != a.size()-1 && a[i][j]!=0)
                if( j!=i  && a[i][j]!=0) return 0;
            }
        }
        return 1;
    }
};