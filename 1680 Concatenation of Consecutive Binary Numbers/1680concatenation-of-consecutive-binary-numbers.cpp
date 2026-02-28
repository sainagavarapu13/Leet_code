class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans=1;
        int mod =1e9+7;
        for(int i=2;i<=n;i++){
            int len = log2(i)+1;
            ans = (ans<<len)|i;
            ans%=mod;
        }
        return ans;
    }
};