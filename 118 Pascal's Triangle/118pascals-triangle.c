/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int n, int* returnSize, int** returnColumnSizes) {
    int i,j;
     
      int **a=(int**)malloc(n*(sizeof(int*)));
       for (int i = 0; i < n; i++) {
        a[i] = (int*)malloc((i + 1) * sizeof(int)); // Row size is i + 1
    }

    // Initialize returnColumnSizes array
    *returnColumnSizes = (int*)malloc(n * sizeof(int));

    for(i=0;i<n;i++){
         (*returnColumnSizes)[i]=i+1;
        for(j=0;j<n;j++){
           
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
     *returnSize=n;
    return a;
}