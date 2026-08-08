int maximumCount(int* a, int x) {
    int cnt =0,pos=0;
    for( int i=0;i<x;i++){
        if( a[i]<0) cnt++;
        else if( a[i]>0) pos++;
    }
    
    return pos>cnt ? pos : cnt;
}