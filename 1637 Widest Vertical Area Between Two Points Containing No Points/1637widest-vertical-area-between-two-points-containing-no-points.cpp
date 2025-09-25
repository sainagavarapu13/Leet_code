class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        int m=-1,i;
        for(i=1;i<a.size();i++){
            m=max(m,abs(a[i][0]-a[i-1][0]));
        }
        return m;
    }
};