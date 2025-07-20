int sumOfGoodNumbers(int* a, int n, int k) {
    int i,sum=0;
    for(i=0;i<n;i++){
        if((i+k>=n)&&(i-k<0))sum+=a[i];
        else if((i+k>=n)||(i-k<0)){
            if(i+k>=n) {
                if(a[i]>a[i-k]) sum+=a[i];
            }
            else {
                if(a[i]>a[i+k]) sum+=a[i];
            }
        }
        else {
            if((a[i]>a[i+k])&&(a[i]>a[i-k])) sum+=a[i];
        }
    }
    return sum;
}