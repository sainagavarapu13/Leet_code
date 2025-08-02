class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(),ans = nums[0],freq=1;
        sort(nums.begin() , nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) freq++;
            else {
                freq = 1;
            }
            if(freq>n/2) return nums[i];
        }
        return nums[0];
    }
};