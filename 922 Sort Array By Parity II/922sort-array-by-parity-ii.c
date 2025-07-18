/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* ptr = (int*)malloc(numsSize*sizeof(int));
    int i,a=0,b=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            ptr[2*a] = nums[i];
            a++;
        }
        else{
            ptr[2*b+1] = nums[i];
            b++;
        }
    }
    return ptr;
}