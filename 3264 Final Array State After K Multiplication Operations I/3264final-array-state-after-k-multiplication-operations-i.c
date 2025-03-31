/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* A, int n, int k, int m, int* returnSize) {
    *returnSize = n;
    int *ptr = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i] = A[i];
    }
    while(k){
        int i = 0,min = ptr[0],index=0;
        for(i=0;i<n;i++){
            if(min>ptr[i]) {
                min = ptr[i];
                index = i;
            }
        }
        ptr[index] = m*ptr[index];
        k--;
    }
    return ptr;
    
}