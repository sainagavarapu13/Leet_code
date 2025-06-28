int maximumWealth(int** a, int m, int* n) {
    int cnt=0;
    int i,j;
    for(i=0;i<m;i++){
        int sum=0;
        for(j=0;j<n[i];j++){
            sum+=a[i][j];
        }
        if(sum>cnt){
            cnt=sum;
        }
    }
    return cnt;
}