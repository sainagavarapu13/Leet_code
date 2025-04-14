int differenceOfSum(int* nums, int numsSize) {
    int sum=0,cnt=0;
    for( int  i=0;i<numsSize;i++){
        sum+=nums[i];
        while(nums[i]){
            cnt+=nums[i]%10;
            nums[i]= nums[i]/10;
        }
    }
    return sum-cnt;
}