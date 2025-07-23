int diagonalSum(int** m, int x, int* y) {
    int sum=0;
    for( int i=0;i<x;i++){
        for( int j=0;j<y[i];j++){
            if( i==j) sum+=m[i][j];
           else if( i+j == x-1) sum+=m[i][j];
        }
    }
    return sum;
    
}