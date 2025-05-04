/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* n, int x, int* rs) {
    *rs =  x;
    int * res = (int*)malloc(x*sizeof(int));
    for( int i=0;i<x;i++){
        res[i]=n[n[i]];
    }
    return res;
}