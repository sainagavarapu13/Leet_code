int minOperations(int* a, int x, int k) {
    int cnt=0;
    for( int i=0;i<x;i++){  
        if( a[i]<k) cnt++;
    }
    return cnt ;
}