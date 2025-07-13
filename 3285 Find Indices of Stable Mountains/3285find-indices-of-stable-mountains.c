/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* a, int n, int k, int* returnSize) {
    int *res=(int*)malloc(n*sizeof(int));
    int i,idx=0;
    for(i=1;i<n;i++){
        if(a[i-1]>k){
            res[idx++]=i;
        }
    }
    * returnSize=idx;
    return res;
}