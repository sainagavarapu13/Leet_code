int countPairs(int* a, int n, int k) {
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]<k){
                cnt++;
            }
        }
    }
    return cnt;
}