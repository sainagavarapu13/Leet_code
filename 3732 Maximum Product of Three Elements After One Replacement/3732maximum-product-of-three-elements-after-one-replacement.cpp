class Solution {
public:
    long long maxProduct(vector<int>& a) {
        long long ans = 1;
        for( int i=0;i<a.size();i++){
            a[i] = abs( a[i]);
        }
        sort( a.begin(),a.end());
        int n = a.size();
        long long m = (long long)a[0] * a[1];
        m = max(m, (long long)a[0] * a[n - 1]);
        m = max(m, (long long)a[n - 1] * a[n - 2]);
        return abs(m)*1e5;
        
        
        
    }
};