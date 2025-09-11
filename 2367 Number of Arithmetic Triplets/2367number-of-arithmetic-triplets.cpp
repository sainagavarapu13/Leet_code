class Solution {
public:
    int arithmeticTriplets(vector<int>& a, int d) {
        int cnt=0;
        for( int i=0;i<a.size();i++){
            if( find( a.begin(),a.end(),(a[i]+d))!=a.end()){
                if( find( a.begin(),a.end(),(a[i]+d+d))!=a.end()){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};