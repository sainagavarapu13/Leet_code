/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* a, int n, int* returnSize) {
    int *res=(int*)malloc(n*sizeof(int));
    * returnSize=n;
    int i,k=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            res[k++]=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            res[k++]=a[i];
        }
    }
    return res;
}