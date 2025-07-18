int sumOfGoodNumbers(int* nums, int numsSize, int k) {
    int i=0,sum=0;
    for(int i=0;i<numsSize;i++){
        int a=0,b=0;
        if((i-k)<0 || nums[i-k]<nums[i]){
            a=1;
        }
        if((i+k)>=numsSize || nums[i+k]<nums[i]){
            b=1;
        }
        if(a==1 && b==1) sum = sum + nums[i];
    }
    return sum;
}