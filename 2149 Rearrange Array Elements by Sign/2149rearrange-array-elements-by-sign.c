/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int* ptr = (int*)malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    int A[100000],B[100000],i,a=0,b=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]<0) A[a++] = nums[i];
        else B[b++] = nums[i];
    }
    int c = 0,d=0;
    for(i=0;i<numsSize;i++){
        ptr[i++] = B[c++];
        if(i>=numsSize) return ptr;
        ptr[i] = A[d++];
    }
    return ptr;
}