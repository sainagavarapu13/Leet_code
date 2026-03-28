class Solution {
public:
    int minAbsoluteDifference(vector<int>& a) {
        int l=-1, b=-1;
        int ans = INT_MAX;
        for( int i =0;i<a.size();i++){
            if( a[i]==1){
                l=i;
                if( b !=-1){
                    ans = min( ans, abs(b-l));
                }
            }else if( a[i]==2){
                b = i;
                if( l!=-1){
                    ans = min( ans , abs(l-b));
                }
            }
        }
       return (ans == INT_MAX) ? -1 : ans;
    }
};