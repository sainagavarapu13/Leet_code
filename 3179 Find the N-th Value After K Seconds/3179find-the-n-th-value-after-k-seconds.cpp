class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> v(n,1);
        int MOD = 1e9 + 7;
        while(k--){
            long long sum=0;
        for(int i=0;i<n;i++){
            sum =(sum+v[i])%MOD;
            v[i] = sum;
        }
        }
        return v[n-1];
    }
};