/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* a, int n, int* returnSize) {
  int total = 0;

   
    for (int i = 0; i < n; i += 2) {
        total += a[i]; 
    }

    
    int* res = (int*)malloc(total* sizeof(int));
    int k=0,i;
    for(i=0;i<n;i+=2){
        while(a[i]--){
            res[k++]=a[i+1];
        }
    }
    * returnSize=k;
    return res;
}