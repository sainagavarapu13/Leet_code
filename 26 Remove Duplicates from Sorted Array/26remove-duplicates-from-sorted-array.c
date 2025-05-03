int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0) return 0;
    int cnt=1,j=0,i=0;
    for(i=0;i<numsSize-1;i++){
        if(nums[i]!=nums[i+1]){
            nums[j]=nums[i];
            j++;
        }
    }
    nums[j++] = nums[i];
    return j;
}