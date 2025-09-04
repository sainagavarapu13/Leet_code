class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size(),b=0;
        for(int i = 0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                for(i;i<n-1;i++){
                    if(nums[i]>nums[i+1]) return 0;
                }
            }
            else if(nums[i]>nums[i+1]){
                for(i;i<n-1;i++){
                    if(nums[i]<nums[i+1]) return 0;
                }
            }
        }
        return 1;
    }
};