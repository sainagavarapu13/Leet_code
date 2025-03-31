/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    * returnSize =2;
    int * res = (int *)malloc(2*sizeof(int));
    res[0]=-1;
    res[1]=-1;
    if( numsSize==0){
        return res;
    }
    for( int i=0;i<numsSize;i++){
        if( nums[i]== target){
            res[0]=i;
            break;
        }
    }
    for( int i=numsSize-1;i>=0;i--){
        if( nums[i]== target){
            res[1]=i;
            break;
        }
    }
    return res;
}