int dig(int n){
    int cnt=0,max =-1;
 while(n){
    cnt++;
    if( max < n%10) max = n%10;
    n/=10;
}
    int d =0;
    while( cnt--){
        d = d*10 + max;
    }
    return d;
}
int sumOfEncryptedInt(int* a, int x) {
    int sum=0;
    for( int i=0;i<x;i++){
        sum+=dig(a[i]);
    }
    return sum;
}