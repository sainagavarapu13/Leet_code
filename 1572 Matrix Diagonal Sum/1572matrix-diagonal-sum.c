int diagonalSum(int** a, int n, int* m) {
    int i,j,sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<m[i];j++){
            if(i==j) sum+=a[i][j];
            else if(i+j==n-1) sum+=a[i][j]; 
        }
    }
    return sum;
}