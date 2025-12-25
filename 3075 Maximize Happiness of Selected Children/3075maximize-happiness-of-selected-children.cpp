class Solution {
public:
    long long maximumHappinessSum(vector<int>& a, int k) {
        sort(a.begin(),a.end(),greater<>());
        long long sum=0;
        for( int i=0;i<k;i++){
            if( a[i]-i> 0) sum+=a[i]-i;
        }
        return sum;
    }
};