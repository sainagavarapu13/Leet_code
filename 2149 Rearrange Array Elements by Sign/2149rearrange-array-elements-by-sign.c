/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* a, int n, int* returnSize) {
    int *res=(int*)malloc(n*sizeof(int));
    * returnSize=n;
    int i;
    int x[n/2],y[n/2];
    int X=0,Y=0;
    for(i=0;i<n;i++){
        if(a[i]>0){
            x[X++]=a[i];
        }
        else y[Y++]=a[i];
    }X=0;
    for(i=0;i<n;i+=2){
        res[i]=x[X++];
    }Y=0;
    for(i=1;i<n;i+=2){
        res[i]=y[Y++];
    }
    return res;
}