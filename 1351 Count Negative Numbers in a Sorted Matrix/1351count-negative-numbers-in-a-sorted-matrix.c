int countNegatives(int** m, int x, int* y) {
    int cnt=0;
    for( int i=0;i<x;i++){
        for( int j = y[i]-1;j>=0;j--){
            if( m[i][j]>0) break;
            else if( m[i][j] <0) cnt++;
        }
    }
    return cnt;
}