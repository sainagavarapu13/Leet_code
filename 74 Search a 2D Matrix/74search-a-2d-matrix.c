bool searchMatrix(int** a, int n, int* m, int k) {
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m[i];j++){
            if(a[i][j]==k){
                return 1;
                break;
            }
        }
    }
    return 0;
}