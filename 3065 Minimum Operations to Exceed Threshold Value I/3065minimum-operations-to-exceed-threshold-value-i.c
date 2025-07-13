int minOperations(int* a, int n, int k) {
    int i,cnt=0;
    for(i=0;i<n;i++){
        if(a[i]<k){
            cnt++;
        }
    }
    return cnt;
}