int minMovesToSeat(int* a, int n, int* A, int N) {
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(A[i]>A[j]){
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    int ans=0;
    for(i=0;i<n;i++){
        ans+=abs(a[i]-A[i]);
    }
    return ans;
}