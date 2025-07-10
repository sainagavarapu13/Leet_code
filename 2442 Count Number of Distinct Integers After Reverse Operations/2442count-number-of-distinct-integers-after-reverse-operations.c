int rev(int n){
    int b=0;
    while(n){
        int k=n%10;
        b=b*10+k;
        n=n/10;
    }
    return b;
}
int countDistinctIntegers(int* a, int n) {
 int *res=(int*)malloc((2*n)*sizeof(int));
 int i,k=0,cnt=0;
 int f[1000001]={0};
 for(i=0;i<n;i++){
    res[k++]=a[i];
 }
    for(i=0;i<n;i++){
        res[k++]=rev(a[i]);
    }
    for(i=0;i<2*n;i++){
    	f[res[i]]++;
	}
    for(i=0;i<1000001;i++){
        if(f[i]!=0){
            cnt++;
        }
    }
    return cnt;
}