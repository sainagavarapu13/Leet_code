/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* a, int n, int pivot, int* returnSize) {
    int *result=(int*)malloc(n*sizeof(int));
    *returnSize=n;
    int i,b[n],p=0;
    for(i=0;i<n;i++){
        if(a[i]<pivot){
            result[p++]=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==pivot){
            result[p++]=a[i];
        }
    }
     for(i=0;i<n;i++){
        if(a[i]>pivot){
            result[p++]=a[i];
        }
     }
     return result;
}