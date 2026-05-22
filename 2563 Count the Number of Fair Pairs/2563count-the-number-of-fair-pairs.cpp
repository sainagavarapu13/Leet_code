class Solution {
public:
    long long countFairPairs(vector<int>& a, int l, int u) {
        sort( a.begin(), a.end());

        long long ans=0;
        for( int i=0;i<a.size();i++){
            auto j = lower_bound( a.begin()+i+1, a.end(), l-a[i]);
            auto k = upper_bound(a.begin()+i+1, a.end(), u-a[i]);
            ans+=(k-j);
        }
        return ans;
    }
};