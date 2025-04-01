/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* ptr = (int*)malloc(numsSize*sizeof(int));
    int A[numsSize],B[numsSize];
    A[0] = 0,B[numsSize-1] = 0;
    for(int i=0;i<numsSize-1;i++){
        A[i+1] = A[i]+nums[i];
        B[numsSize-i-2] = B[numsSize-i-1] + nums[numsSize-i-1];
    }
    for(int i=0;i<numsSize;i++){
        ptr[i] = abs(A[i]-B[i]);
    }
    return ptr;
}