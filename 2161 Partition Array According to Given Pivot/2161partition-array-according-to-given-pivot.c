/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* n, int ns, int p, int* rs) {
     int *res = (int *) malloc(ns*sizeof(int));
    *rs = ns;
    int k=0;
    for( int i=0;i<ns;i++){
        if( n[i] < p) res[k++] = n[i];
    } 
 for( int i=0;i<ns;i++){
        if(p==n[i]) res[k++] = n[i];
    }
    for( int i=0;i<ns;i++){
        if(n[i]>p) res[k++] = n[i];
    }

    
    return res;

}