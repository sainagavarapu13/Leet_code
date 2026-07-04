class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int m = nums[0];
        int ans = INT_MIN;
        for(int i=k;i<n;i++){
            m = max(m,nums[i-k]);
            ans = max(ans,m+nums[i]);
            // cout<<m<<" "<<ans<<" "<<nums[i-k]<<endl;
        }
        return ans;
    }
};