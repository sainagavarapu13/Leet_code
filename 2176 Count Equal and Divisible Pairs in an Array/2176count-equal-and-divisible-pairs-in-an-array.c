int countPairs(int* a, int n, int k) {
    int i,j,cnt=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]&&(i*j)%k==0){
                cnt++;
            }
        }
    }
    return cnt;
}