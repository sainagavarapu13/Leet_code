/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* a, int n, int* returnSize) {
    int *res=(int*)malloc(n*sizeof(int));
    *returnSize=n;
    int i,j;
    for(i=0;i<n;i++){
        int cnt=0;
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                cnt++;
            }
          
        }
          res[i]=cnt;
    }
    return res;
}