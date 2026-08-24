int ispri(int n){
    int i;
    if(n<=1) return 0;
    for(i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int diagonalPrime(int** a, int n, int* m) {
    int i,j;
 
    int max=0;
    for(i=0;i<n;i++){
        for(j=0;j<m[i];j++){
            if(i<m[i]){
                if(i==j||i+j==n-1){
            if(ispri(a[i][j])&&a[i][j]>max){
                max=a[i][j];
            }
        }}
    }
   
}
 return max;
}