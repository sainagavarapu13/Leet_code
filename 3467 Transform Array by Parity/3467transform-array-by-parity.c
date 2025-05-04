/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* n, int x, int* rs) {
    *rs = x;
    int cnte=0,cnto=0;
    int * res = (int *) malloc(x*sizeof(int));
    for( int i=0;i<x;i++){
        if( n[i]%2==0) cnte++;
        else cnto++;
    }
    int k=0;
    while(cnte){
        res[k++]=0;
        cnte--;
    }while(cnto--){
        res[k++] =1;
    }
    return res;
}