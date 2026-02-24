class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            res ^=nums[i];
        }
        int ans = 0;
        int n = max(bit_width((unsigned)res),bit_width((unsigned)k));
        for(int i=0;i<=n;i++){
            int n= 1<<i;
            if((res&n)!=(k&n)){
                ans++;
            }
            // cout<<(res&n)<<" "<<(k&n)<<endl;
        }
        return ans;
    }
};