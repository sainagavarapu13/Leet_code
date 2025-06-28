/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* a, int n, int* returnSize) {
    int *result=(int*)malloc(n*sizeof(int));
    *returnSize=n;
    int sum=0;
    int i,p=0;
    int k=n;
    while(k--){
        sum+=a[p];
    result[p]=sum;
    p++;
    }
    return result;
}