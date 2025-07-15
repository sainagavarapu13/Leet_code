/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    *returnSize = n;
    int *ptr = (int*)malloc(n*sizeof(int));
    if(n%2!=0){
        ptr[n/2] = 0;
        for(int i=0;i<n/2;i++){
            ptr[i] = (-i)-1;
            ptr[n-i-1] = i+1;
        }
    }
    else{
        for(int i=0;i<n/2;i++){
            ptr[i] = (-i)-1;
            ptr[n-i-1]=i+1;
        }
    }
    return ptr;
}