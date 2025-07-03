/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int *a=(int*)malloc(n*sizeof(int));
    * returnSize=n;
    int k=1,i;
    if(n%2==0){
        for(i=0;i<n;i+=2){
            a[i]=k;
            a[i+1]=0-k;
            k++;
        }
    }
    else{
        a[0]=0;
        for(i=1;i<n;i+=2){
            a[i]=k;
            a[i+1]=0-k;
            k++;
        }
    }
    return a;
}