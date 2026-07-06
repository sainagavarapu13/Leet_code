class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& a) {
        sort( a.begin(), a.end(),[]( auto x, auto y){
            if( x[0]==y[0]) return x[1]>y[1];
            else return x[0]<y[0];
        });
        int p =a[0][0];
        int q = a[0][1];
        int cnt=0;
        for( int i=1;i<a.size();i++){
            if( p<=a[i][0] && q>=a[i][1]) cnt++;
            else{
                p = a[i][0];
                q = a[i][1];
            }
        }
        return a.size()-cnt;
    }
};