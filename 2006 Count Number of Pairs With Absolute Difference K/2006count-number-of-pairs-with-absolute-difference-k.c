int countKDifference(int* a, int n, int k) {
    int i,j,cnt=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(abs(a[i]-a[j])==k){
                cnt++;
            }
        }
    }
    return cnt;
}