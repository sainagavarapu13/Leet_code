/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* a, int x, int f, int* rs) {
    *rs = x+1;
    int * res = (int*)malloc((x+1)*sizeof(int));
    int k=1;
    res[0]=f;
    for( int i=0;i<x;i++){
        res[k++] = res[k-1]^a[i];
    }
    return res;
    
}