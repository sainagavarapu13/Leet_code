class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<long long>a(n ,1);
        int mod = 1000000007;
        while(k--){
            for( int i=1;i<n;i++){
                a[i]=(a[i]+a[i-1])%mod;
            }
        }
        int l = a[n-1]%(mod );
        return l;
    }
};