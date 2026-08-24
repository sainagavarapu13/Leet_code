/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* a, int n, int first, int* returnSize) {
     int *res=(int*)malloc((n+1)*sizeof(int));
     *returnSize=n+1;
     res[0]=first;
     int k=1;
     for(int i=0;i<n;i++){
        res[k++]=res[i]^a[i];
     }
     return res;
}