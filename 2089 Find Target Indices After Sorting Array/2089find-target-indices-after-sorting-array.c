/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* A, int n, int target, int* returnSize) {
    int i=0,j=0,b=0;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(A[i]==target) {
            b++;
        }
    }
    *returnSize = b;
    int* ptr = (int*)malloc(b*sizeof(int));
    int  k=0;
    for(i=0;i<n;i++){
        if(A[i]==target) {
            ptr[k++] = i;
        }
    }
    return ptr;
}