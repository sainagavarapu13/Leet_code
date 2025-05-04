int maximumWealth(int** a, int x, int* y) {
     int max=-1;
    for( int i=0;i<x;i++){
        int sum=0;
        for( int j=0;j<y[i];j++){
            sum+=a[i][j];
        }
        if( sum>max) max=sum;
    }

    return max;
}