int** generate(int x, int* returnSize, int** returnColumnSizes) {
    int **m = (int**) malloc(x*sizeof(int*));
    *returnSize = x;
    *returnColumnSizes = (int*)malloc(x*sizeof(int));
    
    for(int i=0; i<x; i++){
        m[i] = (int*)malloc((i+1)*sizeof(int));
        (*returnColumnSizes)[i] = i+1;
        
        for(int j=0; j<=i; j++){  
            if(j == 0 || j == i){  
                m[i][j] = 1;
            } else if(i > 0 && j > 0) { 
                m[i][j] = m[i-1][j-1] + m[i-1][j];
            }
        }
    }
    return m;
}