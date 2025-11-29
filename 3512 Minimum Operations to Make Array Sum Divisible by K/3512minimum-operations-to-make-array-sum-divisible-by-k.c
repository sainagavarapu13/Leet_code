int minOperations(int* a, int n, int k) {
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum%k;
}