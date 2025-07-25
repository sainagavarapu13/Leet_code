int maxi(int a[],int n){
    int i;
    int max=-101;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int maxSum(int* a, int n) {
    if(maxi(a,n)<0) return maxi(a,n);
    int i;
    int f[101]={0};
    for(i=0;i<n;i++){
        if(a[i]>0)
        f[a[i]]++;
    }
    int sum=0;
    for(i=0;i<101;i++){
        if(f[i]>=1)
        sum+=i;
    }
    return sum;
}