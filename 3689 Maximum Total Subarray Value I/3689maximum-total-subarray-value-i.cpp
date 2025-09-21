class Solution {
public:
    long long maxTotalValue(vector<int>& a, int k) {
        int ma = INT_MIN , mi = INT_MAX;
        for( int i=0;i<a.size();i++){
            ma = max( ma , a[i]);
            mi = min( mi , a[i]);
        }
        long long  e = 1ll*(ma-mi)*k;
        return e;
    }
};