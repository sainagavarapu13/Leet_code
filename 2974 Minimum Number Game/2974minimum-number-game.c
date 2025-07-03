/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberGame(int* a, int n, int* returnSize) {
   // int *res=(int*)malloc(n*sizeof(int));
     * returnSize=n;
     int i,j;
     for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
     }
     for(i=0;i<n;i+=2){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
     }
     return a;
}