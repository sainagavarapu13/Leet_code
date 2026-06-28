class Solution {
public:
    long long maxSum(vector<int>& a, int k, int mul) {
        long long sum=0;
        sort(a.begin(),a.end(),greater<>());
        for(int i=0;i<k;i++){
            sum+=max(1LL*a[i]*mul,1LL*(a[i]));
            mul--;
        }
        return sum;
    }
};