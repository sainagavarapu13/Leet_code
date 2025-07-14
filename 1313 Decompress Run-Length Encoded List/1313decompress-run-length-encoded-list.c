/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* a, int x, int* returnSize) {
    int size =0;
   for( int i=0;i<x;i+=2){
        size+=a[i];
   }
   * returnSize = size;
     int * rs = (int *)malloc(size*sizeof(int));
     int l=0;
     for( int i=0;i<x;i+=2){
        int k = a[i];
        while(k){
            rs[l++]=a[i+1];
            k--;
        }
     }
     return rs;
}