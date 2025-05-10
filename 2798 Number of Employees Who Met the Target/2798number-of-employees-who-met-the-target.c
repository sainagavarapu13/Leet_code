int numberOfEmployeesWhoMetTarget(int* h, int x, int t) {
    int cnt =0;
    for( int i=0;i<x;i++){
        if( h[i]>=t) cnt++;
    }
    return cnt ;
}