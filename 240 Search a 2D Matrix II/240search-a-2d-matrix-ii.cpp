class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        int j =a[0].size()-1;
        int i=0;
        while( i<a.size() && j >= 0){
            if( a[i][j] ==t) return 1;
            else if( a[i][j]>t){
                j--;
            }else{
                i++;
            }
        }
        return 0;
    }
};