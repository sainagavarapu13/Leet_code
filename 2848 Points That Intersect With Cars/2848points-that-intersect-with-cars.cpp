class Solution {
public:
    int numberOfPoints(vector<vector<int>>& a) {
        sort( a.begin(), a.end());
    int p = a[0][0];
    int q = a[0][1];
    int cnt=0;
        for( int i=1;i<a.size();i++){
            if( a[i][0]<=q){
                q = max( q , a[i][1]);
            }else{
                cnt+=( q-p+1);
                p = a[i][0];
                q = a[i][1];
            }

        }
         cnt+=( q-p+1);
        return cnt ;
    }
};