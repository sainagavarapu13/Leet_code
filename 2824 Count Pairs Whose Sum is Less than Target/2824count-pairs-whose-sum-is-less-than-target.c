int countPairs(int* nums, int numsSize, int target) {
    int i=0,j=0,b=0;
    for(i=0;i<numsSize;i++){
        int c = nums[i];
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]<target){
                b++;
            }
        }
    }
    return b;
}