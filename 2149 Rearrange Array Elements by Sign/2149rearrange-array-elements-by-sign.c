/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* n, int x, int* returnSize) {
    * returnSize = x;
    
    int a[x/2];
    int b[x/2];
    int l=0,k=0;
    for( int i=0;i<x;i++){
        if( n[i]<0) a[l++]=n[i];
        else b[k++]=n[i];
    }
    l=0,k=0;
    int i=0;
    while(l<x/2 && k<x/2){
        n[i++]=b[l++];
        n[i++]=a[k++];
    }
    return n;
}