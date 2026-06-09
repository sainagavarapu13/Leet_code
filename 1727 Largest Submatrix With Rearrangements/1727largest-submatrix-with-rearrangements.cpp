class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& a) {
        for( int i=1;i<a.size();i++){
            for( int j=0;j<a[0].size();j++){
                if(a[i][j]==1)a[i][j]+=a[i-1][j];
            }
        }
        int res=0;
        for(int i=0;i<a.size();i++){
            sort(a[i].rbegin(),a[i].rend());
            for( int j=0; j< a[0].size();j++){
                res = max( a[i][j]*((int)j+1),res);
            }
        }
        return res;
    }
};