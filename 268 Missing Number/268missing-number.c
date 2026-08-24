int missingNumber(int* nums, int numsSize) {
    int sum = (numsSize)*(numsSize+1)/2;
    int elements_sum = 0;
    for( int i=0;i<numsSize;i++){
           elements_sum+=nums[i]; 
    }
    return sum-elements_sum;
}