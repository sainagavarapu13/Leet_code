int findPeakElement(int* a, int n) {
    int i;
    if(n==1) return 0;
    for(i=0;i<n;i++){
        if(i==0&&a[i]>a[i+1]){
            return i;
        }
        else if(i==(n-1)&&a[i]>a[i-1]) return i;
        else{
            if(a[i]>a[i+1]&&a[i]>a[i-1]) return i;
        }
    }
    return 0;
}