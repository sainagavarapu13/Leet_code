class Solution {
public:
    long long maximumMedianSum(vector<int>& a) {
        sort(a.begin(),a.end());
        long long sum =0;
        int n = (int)a.size();
        for( int i=n-2;i>=n/3;i-=2){
            sum+=a[i];
        }
        return sum;
    }
};