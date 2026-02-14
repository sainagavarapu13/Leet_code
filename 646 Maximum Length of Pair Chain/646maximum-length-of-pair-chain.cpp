class Solution {
public:
    int findLongestChain(vector<vector<int>>& a) {
       sort( a.begin(),a.end(),[](auto& x, auto& y){
           return x[1]<y[1];
       });
       int cnt=0;
       int x = INT_MIN;
       for( auto y:a){
        if( x<y[0]){
            x = y[1];
            cnt++;
        }
       }
       return cnt;

    }
};