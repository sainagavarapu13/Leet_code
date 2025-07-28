bool isMonotonic(int* a, int n) {
    int arr[n];
    int  i,k=0;
    for(i=0;i<n;i++){
        if(i!=n-1)
        if(a[i]!=a[i+1]){
            arr[k++]=a[i];
        }
    }
    int cnt=0,sum=0;
    for(i=0;i<n;i++){
        if(i!=n-1)
       if(a[i]>a[i+1]) cnt++;
       else if(a[i]<a[i+1]) sum++;
    }
    if(cnt==0||sum==0) return 1;
    else return 0;
}