void moveZeroes(int* a, int n) {
    int i,j,p=0;
    int b[n];
    for(i=0;i<n;i++){
        if(a[i]!=0){
            b[p++]=a[i];
        }
    }
    while(p<n){
        b[p++]=0;
    }
    for(i=0;i<n;i++){
        a[i]=b[i];
    }
}