/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    int i,a=0,b=0;
    for(i=0;i<numsSize;i++){
        if(i%2==0){
            a += nums[i];
        }
    }
    *returnSize = a;
    int *ptr = (int*)malloc(a*sizeof(int));
    for(i=0;i<a;){
        for(int j=0;j<nums[2*b];j++){
            ptr[i++] = nums[2*b+1];
        }
        b++;
    }
    return ptr;
}