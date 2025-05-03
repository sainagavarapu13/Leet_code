/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* a, int n, int* returnSize) {
    int *result=(int*)malloc(n*sizeof(int));
    *returnSize=n;
    for(int i=0;i<n;i++){
        result[i]=a[a[i]];
    }
    return result;
}