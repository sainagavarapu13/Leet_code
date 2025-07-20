int numberOfPairs(int* a, int n, int* b, int m, int k) {
    int i;
    for(i=0;i<m;i++){
        b[i]=b[i]*k;
    }
    int j,cnt=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]%b[j]==0){
                cnt++;
            }
        }
    }
    return cnt;
}