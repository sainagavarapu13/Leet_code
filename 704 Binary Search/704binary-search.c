int search(int* nums, int numsSize, int target) {
    int c = 0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            return i;
        }
        else c++;
    }
    return -1;
}