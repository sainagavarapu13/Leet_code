class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a =nums[0];
        vector<int>v(nums.begin()+1,nums.end());
        sort(v.begin(),v.end());
        return nums[0]+v[0]+v[1];
    }
};