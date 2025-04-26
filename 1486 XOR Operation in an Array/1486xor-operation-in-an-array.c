int xorOperation(int n, int s) {
    int x;
    int a[n];
    a[0] = s;
    x = a[0];
    for( int i=1;i<n;i++){
        a[i]= s + 2*i;
        x = x^a[i];
    }
    return x;
    
}