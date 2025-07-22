bool searchMatrix(int** m, int x, int* y, int t) {
    for( int i=0;i<x;i++){
        for( int j=0;j<y[i];j++){
            if( m[i][j]==t) return 1;

        }
    }
    return 0;
}