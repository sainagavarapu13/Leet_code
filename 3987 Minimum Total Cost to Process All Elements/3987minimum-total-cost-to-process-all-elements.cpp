class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long res = 0, n = nums.size();
            long long o = k,a=1, mod=1000000007LL,cur = k;
        for(int i=0;i<n;i++){
            if(nums[i]<=cur){
                cur -= nums[i];
            }
            else{
                long long s = (nums[i]-cur+o-1)/o;
                const long long inv2 = 500000004LL;
                long long p = (s%mod)*((2LL*(a%mod)+(s%mod)-1 + mod)%mod)%mod;
                p = (p *inv2 )%mod;
                res = (res+p)%mod;
                a += s;
                cur += s * o;
            cur -= nums[i];
            }
        }
        return (int)(res%mod);
    }
};