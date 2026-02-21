class Solution {
public:
    int findMin(vector<int>& nums) {
        int low  = 0,high = nums.size()-1;
       int  mini = nums[0];
        while(low<=high){
            int mid = (low+high)/2;
            mini = min(nums[mid],mini);
            if(nums[low]==nums[mid]){
                low++;
                continue;
            }
            if(nums[high]==nums[mid]){
                high--;
                continue;
            }
            if(nums[low]<nums[mid]){
                mini = min(mini,nums[low]);
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return mini;
    }
};