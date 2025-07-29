/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int n, int* returnSize) {
     int i,j;
     
      int **a=(int**)malloc((n+1)*(sizeof(int*)));
       for (int i = 0; i <= n; i++) {
        a[i] = (int*)malloc((i + 1) * sizeof(int)); // Row size is i + 1
    }

   
     *returnSize=n+1;
    for(i=0;i<=n;i++){
        
        for(j=0;j<=i;j++){
           
            if(i==j){
                a[i][j]=1;
            }
            else if(j==0){
                a[i][j]=1;
            }
            else if(i>j){
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    int *arr=(int *)malloc((n+1)*sizeof(int));
    
       
        for(j=0;j<=n;j++){
           arr[j]= a[n][j];
        }
           for(i=0;i<=n;i++){
            free(a[i]);
           }
    free(a);
    return arr;
}