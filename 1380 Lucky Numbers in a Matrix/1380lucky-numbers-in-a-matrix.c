/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int i,j,b=0;
    int* ptr = (int*)malloc(101*sizeof(int));
    for(i=0;i<matrixSize;i++){
        int min=10000,max = 0;
        for(j=0;j<matrixColSize[0];j++){
            int a = matrix[i][j];
            int k,l,c=0;
            for(k=0;k<matrixSize;k++){
                if(a<matrix[k][j]){
                    c=1;
                    break;
                }
            }
            for(l=0;l<matrixColSize[0];l++){
                if(a>matrix[i][l]){
                    c=1;
                    break;
                }
            }
            if(c==0) ptr[b++] = a;
        }
    }
    *returnSize = b;
    return ptr;
}