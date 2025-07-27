int countHillValley(int* nums, int numsSize) {
    if(numsSize<3) return 0;
    int i,a=nums[0],c=0;
    for(i=1;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]) continue;
        if((nums[i]>a && nums[i]>nums[i+1]) || (nums[i]<a && nums[i]<nums[i+1])) c++;
        a = nums[i];
    }
    return c;
}