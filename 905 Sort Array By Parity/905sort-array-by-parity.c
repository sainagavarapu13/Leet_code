/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* ptr = (int*)malloc(numsSize*sizeof(int));
    int A[numsSize],k=0,a=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            ptr[k++] = nums[i];
        }
        else{
            A[a++] = nums[i];
        }
    }
    a = 0;
    for(k;k<numsSize;k++){
        ptr[k] = A[a++];
    }
    return ptr;
}