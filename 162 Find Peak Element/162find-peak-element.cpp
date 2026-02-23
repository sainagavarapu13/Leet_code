class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int  i = 0,j=nums.size()-1;
        int n = nums.size();
        if(n==1) return 0;
        if(nums[i]>nums[i+1]) return i;
        if(nums[j]>nums[j-1]) return j;
        while(i<=j){
            int mid  = (i+j)/2;
            // if((mid==0)|| mid==nums.size()-1) return mid;
            if(nums[mid]<nums[mid+1]){
                i = mid+1;
            }
            else if(nums[mid]<nums[mid-1]){
                j = mid-1;
            }
            else{
                return mid;
            }
        }
        return 0;
    }
};