/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    *returnSize = 0;
    int *A = (int *)malloc(heightSize*sizeof(int));
    int i=0,k=0;
    for(i=0;i<heightSize-1;i++){
        if(threshold<height[i]){
            A[(*returnSize)++] = i +1;
        }
    }
    A = (int*)realloc(A, (*returnSize) * sizeof(int));
    return A;
}