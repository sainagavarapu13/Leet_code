int maxFrequencyElements(int* a, int n) {
    int i,sum=0;
    int f[101];
    for(i=0;i<n;i++){
        f[a[i]]++;
    }
    int max=-1;
    for(i=0;i<101;i++){
        if(f[i]>max){
            max=f[i];
        }
    }
    for(i=0;i<101;i++){
        if(f[i]==max){
            sum+=f[i];
        }
    }
    return sum;
}