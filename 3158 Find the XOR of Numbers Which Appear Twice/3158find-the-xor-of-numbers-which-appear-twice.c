int duplicateNumbersXOR(int* n, int x) {
    int f[51];
    int max =-1;
    for(int i=0;i<x;i++){
        f[n[i]]++;
        if( max < n[i]) max = n[i];
    }
    int k =0,cnt=0;
    for( int i = 0 ;i<=max;i++){
        if( f[i]==2){
        if( cnt==0){
        k=i;
        cnt++;
        }else{
            k^=i;
        }}
    }
    return k;
}