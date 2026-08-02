class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans =0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                long long b = gcd(nums[i],nums[j]);
                long long  c =  nums[i]/b * nums[j]/b;
                ans = max(c,ans);
            }
        }
        return ans;
    }
};