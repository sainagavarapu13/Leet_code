int findLucky(int* a, int x) {
    int f[501]={0};
    for( int i=0;i<x;i++){
        f[a[i]]++;
    }
    int max =-1;
    for( int i=0;i<x;i++){
        if( f[a[i]]==a[i]){
        if( max <a[i]) max = a[i];
    }
    }
     return max;
}