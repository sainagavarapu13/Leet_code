int maxProductDifference(int* nums, int numsSize){
    int max1=0,max2=0,min1=100000,min2=100000,a,b;
    for(int i=0;i<numsSize;i++){
        if(max1<nums[i]) {
            max1 = nums[i];
            a = i;
        }
        if(min1>nums[i]) {
            min1 = nums[i];
            b = i;
        }
    }
    for(int i=0;i<numsSize;i++){
        if(max2<nums[i] && i!=a) {
            max2 = nums[i];
        }
        if(min2>nums[i] && i!=b) {
            min2 = nums[i];
        }
    }
    return ((max1*max2) - (min1)*(min2));
}