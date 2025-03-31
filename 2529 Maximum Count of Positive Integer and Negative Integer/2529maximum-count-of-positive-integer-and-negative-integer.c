int maximumCount(int* nums, int numsSize) {
    int a = 0,b=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0) a++;
        if(nums[i]<0) b++;
    }
    return a>b ? a:b;
}