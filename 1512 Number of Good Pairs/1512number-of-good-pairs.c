int numIdenticalPairs(int* nums, int numsSize) {
    int i=0,b=0;
    while(i<numsSize){
        int j=i+1;
        while(j<numsSize){
            if(nums[i]==nums[j] && i<j) b++;
            j++;
        }
        i++;
    }
    return b;
}