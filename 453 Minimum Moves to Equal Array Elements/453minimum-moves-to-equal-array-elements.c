int minMoves(int* a, int x) {
     int sum=0,min=a[0];
    for( int i=0;i<x;i++){
         if(min >a[i]) min = a[i];
    }
    for( int i=0;i<x;i++){
        sum+=a[i]-min;
    }
    return abs(sum);
}