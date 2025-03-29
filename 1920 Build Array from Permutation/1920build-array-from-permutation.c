/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *ptr = (int *)malloc(numsSize*sizeof(int));
    int i=0;
    while(i<numsSize){
        ptr[i] = nums[nums[i]];
        i++;
    }
    return ptr;
}