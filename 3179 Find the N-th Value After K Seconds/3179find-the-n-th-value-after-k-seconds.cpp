class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int>a;
       for(int i=0;i<n;i++) a.push_back(1);
        int sum=0;
        while(k--){
            sum=0;
        for(int i=1;i<n;i++){
            sum=(a[i-1]+a[i])%1000000007;
            a[i]=sum;
        }
        }
        return a[n-1];
    }
};