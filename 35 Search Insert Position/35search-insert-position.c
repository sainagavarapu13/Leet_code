int searchInsert(int* nums, int numsSize, int target) {
    int left = 0,right=numsSize-1;
    int mid = (left+right)/2;
    while(left<=right){
        mid = (left+right)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target){
            left = mid+1;
        }
        else if(nums[mid]>target){
            right = mid-1;
        }
    }
    return left;
}