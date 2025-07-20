int findCenter(int** a, int n, int* m) {
    int f[100001]={0};
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m[i];j++){
            f[a[i][j]]++;
        }
    }
    for(i=0;i<100001;i++){
        if(f[i]>=n){
            return i;
            break;
        }
    }
     
    return -1;
}