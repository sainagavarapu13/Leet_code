int minOperations(int n) {
    int sum=0;
    for( int i=n-1;i>=0;i--){
        if( n < (2*i)+1) sum +=  (2*i)+1-n;
    }
    return sum;

}