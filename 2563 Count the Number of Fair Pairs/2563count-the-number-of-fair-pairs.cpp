class Solution {
public:
    long long countFairPairs(vector<int>& a, int lower, int upper) {
        sort(a.begin(),a.end());
        long long ans=0;
        for(int i=0;i<a.size();i++){
            int req = lower_bound(a.begin()+i+1,a.end(),lower-a[i])-a.begin();
            int r = upper_bound(a.begin()+i+1,a.end(),upper-a[i])-a.begin();
            ans+=(long long)((long long)r-(long long)req);
        }
        return ans;
    }
};