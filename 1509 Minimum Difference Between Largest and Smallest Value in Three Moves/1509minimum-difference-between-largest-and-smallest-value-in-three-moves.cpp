class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=4) return 0;
        int n = nums.size()-1,a = nums[n] - nums[3],b = nums[n-3] - nums[0],c = nums[n-2] - nums[1],d = nums[n-1] - nums[2];
        int e = min({a,b,c,d});
        return e;
    }
};