/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* a, int n, int* returnSize) {
    int *res=(int*)malloc(2*sizeof(int));
    int f[n+1];
    for(int i=0;i<=n;i++){
        f[i]=0;
    }
    * returnSize=2;
    int i;
    for(i=0;i<n;i++){
        f[a[i]]++;
    }
    for(i=0;i<=n;i++){
        if(i!=0&&f[i]>1) res[0]=i;
       else if(i!=0&&f[i]==0){
            res[1]=i;
        }
        if(res[0]>0&&res[1]>0) break;
    }
    return res;
}