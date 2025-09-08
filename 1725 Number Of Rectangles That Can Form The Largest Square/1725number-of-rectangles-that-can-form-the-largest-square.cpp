class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& a) {
        map<int,int>b;
        for( auto& i : a){
            int m = INT_MIN;
            m = min( i[1] , i[0]);
            b[m]++;
        }
        int m = INT_MIN;
        int size;
        for( auto& [n,x]:b){
           if( m < n) {
            m = n;
            size = x;
           }
        }
        return size;
    }
};