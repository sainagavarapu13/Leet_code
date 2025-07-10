/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** a, int n, int* m, int* returnSize) {
    int *res=(int*)malloc(2*sizeof(int));
    * returnSize = 2;
    int i,j;
    int req=n*n+1;
    int f[req];
    for(i=0;i<req;i++){
        f[i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            f[a[i][j]]++;
        }
    }
    for(i=0;i<req;i++){
        if(f[i]==2&&i<=n*n) res[0]=i;
        else if(f[i]==0&&i<=n*n){
            res[1]=i;
        }
    }
    return res;
}