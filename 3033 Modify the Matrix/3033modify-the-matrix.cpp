class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& a) {
        vector<int>b;
        for( int i=0;i<a[0].size();i++){
            int ele = INT_MIN;
            for( int j=0;j<a.size();j++){
                ele = max( ele , a[j][i]);
            }
            b.push_back(ele);
        }
        for( int i=0;i<a.size();i++){
            for( int j =0;j<a[0].size();j++){
                if( a[i][j]==-1){
                    a[i][j]=b[j];
                }
            }
        }
        return a;
    }
};