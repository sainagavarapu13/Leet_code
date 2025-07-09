int mini(int a[],int n){
    int i,min=9876;
    int idx;
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            idx=i;
        }
    }
    return idx;
}
int largestSumAfterKNegations(int* a, int n, int k) {
    while(k--){
       int idx=mini(a,n);
       a[idx]=0-a[idx];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}