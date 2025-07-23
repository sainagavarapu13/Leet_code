int singleNonDuplicate(int* a, int n) {
    int i;
    if(n==1) return a[0];
    for(i=0;i<n;i++){
        if(i==0&&a[i]!=a[i+1]) return a[i];
        else if(i==(n-1)&&a[i]!=a[i-1]) return a[i];
        else if(i!=0&&i!=(n-1)){
            if(a[i]!=a[i-1]&&a[i]!=a[i+1]) return a[i];
        }
    }
    return 0;
}