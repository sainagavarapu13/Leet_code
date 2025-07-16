/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int x(int a[],int n){
    int i,ans=0;
    for(i=0;i<n;i++){
        ans=ans^a[i];
    }
    return ans;
 }
int* findArray(int* a, int n, int* returnSize) {
    int *res=(int*)malloc(n*sizeof(int));
    * returnSize=n;
    int k=1,i;
    res[0]=a[0];
    for(i=1;i<n;i++){
       res[k++]=a[i]^a[i-1];
    }
    return res;
}