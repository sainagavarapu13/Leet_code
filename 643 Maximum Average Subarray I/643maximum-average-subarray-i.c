double findMaxAverage(int* a, int x, int k) {
    double sum=0;
    for( int i=0;i<k;i++){
        sum+=a[i];
    }
    double avg = sum/k;
    double max =avg;
    for( int i=0;i<x-k;i++){
        
        sum=sum-a[i]+a[i+k];
        avg = sum/k;
        if( max < avg) max = avg;
    }
    return max;
}