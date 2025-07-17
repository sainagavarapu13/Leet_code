int dominantIndex(int* nums, int numsSize) {
    int max = nums[0],i=0,b=0;
    for(i=1;i<numsSize;i++){
        if(max<nums[i]){
            max = nums[i];
            b = i;
        }
    }
    for(i=0;i<numsSize;i++){
        if(2*nums[i]>max && b!=i) return -1;
    }
    return b;
}