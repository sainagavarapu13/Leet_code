/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize) {
   *returnSize = numsSize;
   int k=0,i=0;
   int* ptr = (int*)malloc(numsSize*sizeof(int));
   for(i=0;i<numsSize;i++){
    for(int j=k;j>index[i];j--){
        ptr[j] = ptr[j-1];
    }
    ptr[index[i]] = nums[i];
    k++;
   }
   return ptr;
}