int numberOfPairs(int* a, int x, int* b, int y, int k) {
    int cnt =0;
    for( int i=0;i<x;i++){
        for( int j=0;j<y;j++){
            if( a[i]%(b[j]*k)==0) cnt++;
        }
    }
    return cnt;
}