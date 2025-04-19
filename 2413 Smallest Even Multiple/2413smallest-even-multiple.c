int smallestEvenMultiple(int n) {
    while(n%2!=0){
        n=2*n;
    }
    return n;
}