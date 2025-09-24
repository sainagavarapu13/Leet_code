class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& a) {
        sort( a.begin(),a.end());
        int ma = INT_MIN;
        for( int i=1;i<a.size();i++){
            ma = max( a[i][0]-a[i-1][0],ma);
        }
        return ma;
    }
};