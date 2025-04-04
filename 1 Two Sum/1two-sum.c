int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *ptr = (int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++){
        long long c = nums[i];
        for(int j=i+1;j<numsSize;j++){
            if(c+nums[j]==target){
                ptr[0] = i;
                ptr[1] = j;
                return ptr;
            }
        }
    }
    return ptr;
}