int xorOperation(int n, int start) {
    int A[n],i=0;
    for(i=0;i<n;i++){
        A[i] = start + 2*i;
    }
    int target = 0;
    for(i=0;i<n;i++){
        target ^= A[i];
    }
    return target;
}