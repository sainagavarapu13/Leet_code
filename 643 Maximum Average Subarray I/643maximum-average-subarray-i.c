double findMaxAverage(int* a, int n, int k) {
    int i=0,j,cnt;
    double max,sum=0;
    for(i=0;i<k;i++){
       sum+=a[i];
    }
    max=sum;
    for(i=k;i<n;i++){
        sum+=a[i]-a[i-k];
        if(sum>max)
        max=sum;
    }

 return max/k;
}