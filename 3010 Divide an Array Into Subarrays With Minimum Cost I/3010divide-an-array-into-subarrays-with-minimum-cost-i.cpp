class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int cnt=nums[0];
        sort( nums.begin()+1,nums.end());
        cnt+=nums[1]+nums[2];
        return cnt;
    }
};