/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* a, int n, int* returnSize) {
    int *res=(int*)malloc(n*sizeof(int));
    * returnSize=n;
    int k=0;
    int i;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            res[k]=a[i];
            k=k+2;
        }
    }
    k=1;
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            res[k]=a[i];
            k=k+2;
        }
    }
    return res;
}