int minOperations(int* nums, int numsSize, int k) {
    int a=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<k) a++;
    }
    return a;
}