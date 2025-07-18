/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* sortEvenOdd(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* ptr = (int*)malloc(numsSize*sizeof(int));
    int A[numsSize],B[numsSize];
    int a =0,b=0,c=0,i,j;
    for(i=0;i<numsSize;i++){
        if(i%2==0){
            A[a++] = nums[i];
        }
        else{
            B[b++] = nums[i];
        }
    }
    for(i=0;i<b;i++){
        for(j=0;j<b-i-1;j++){
            if(B[j]<B[j+1]){
                int temp = B[j];
                B[j] = B[j+1];
                B[j+1] = temp;
            }
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<a-i-1;j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    a=0,b=0;
    for(i=0;i<numsSize;i++){
        ptr[i++] = A[a++];
        if(i>=numsSize) break;
        ptr[i] = B[b++];
    }
    return ptr;
}