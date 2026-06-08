class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int i,cnt=0;
        for(i=max(1,n-k);i<=n+k;i++){
            if((n&i)==0) cnt+=i;
        }
        return cnt;
    }
};