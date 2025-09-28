class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        vector<bool> inc(n,true), dec(n,true);
        vector<long long> p(n,0);
        p[0] = nums[0];
        for(int i=1;i<n;i++) p[i] = p[i-1] + nums[i];
        for(int i=1;i<n;i++) inc[i] = inc[i-1] && nums[i] > nums[i-1];
        for(int i=n-2;i>=0;i--) dec[i] = dec[i+1] && nums[i] > nums[i+1];
        long long m = LLONG_MAX;
        for(int i=1;i<n;i++){
            if(inc[i-1] && dec[i]){
                long long  l = p[i-1];
                long long  r = p[n-1] - p[i-1];
                m = min(m,abs(l-r));
            }
        }
        return m ==LLONG_MAX ? -1 : m;
    }
};