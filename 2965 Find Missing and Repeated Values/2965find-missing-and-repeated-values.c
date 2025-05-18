/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** m, int x, int* y, int* rs) {
    *rs =2;
    int *res = (int *)malloc(2*sizeof(int));
   int n= x*x;
   int *f = (int *)calloc(n+1,sizeof(int));
    for( int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            f[m[i][j]]++;
        }
    }
    for( int i=1;i<=n;i++){
        if( f[i]==2) res[0]=i;
        if( f[i]==0) res[1]=i;
    }
    free(f);
    return res;
 }