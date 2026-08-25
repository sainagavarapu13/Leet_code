class Solution {
public:
    int mySqrt(int x) {
        long long ans;
        for( long long i=0;i*i<=x;i++){
            ans=i;
        }
        return ans;
    }
};