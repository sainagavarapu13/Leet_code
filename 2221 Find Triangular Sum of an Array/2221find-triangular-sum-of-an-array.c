int triangularSum(int* n, int x) {
    int k=x-1;
    if( x==1) return n[0];
    while(k){
        for( int i=0;i<k;i++){
            n[i]=(n[i]+n[i+1])%10;
           
        }
        printf("\n");
        k--;
    }
    return n[0];
}