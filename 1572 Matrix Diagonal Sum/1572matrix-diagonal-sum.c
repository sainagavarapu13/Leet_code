int diagonalSum(int** mat, int matSize, int* matColSize) {
    int n = mat[matSize/2][matSize/2],sum=0;
    for(int i=0,j=matSize-1;i<matSize && i<matColSize[i] && j>=0;i++,j--){
        sum += mat[i][i] + mat[i][j];
    }
    if(matSize%2==0) return sum;
    return sum-n;
}