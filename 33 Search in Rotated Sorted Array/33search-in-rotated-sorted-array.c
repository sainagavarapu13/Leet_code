int search(int* nums, int numsSize, int target) {
    int  k = -1;
    for( int i=0;i<numsSize;i++){
        if(nums[i]== target ){
            k = i;
            break;
        }
    }
    return k;
}