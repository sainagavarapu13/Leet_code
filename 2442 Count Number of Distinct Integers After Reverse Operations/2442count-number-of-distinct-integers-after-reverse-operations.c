int countDistinctIntegers(int* n, int x) {
    int a[x],sum=0;
    int f[10000000]={0};
    for( int i=0;i<x;i++){
        int k=0;
        f[n[i]]++;
        while(n[i]){
            k=k*10+n[i]%10;
            n[i]/=10;
        }
        sum+=k;
        a[i]=k;
        f[a[i]]++;
        
    }
    int cnt =0;
    
    
    for( int i=0;i<10000000;i++){
        if( f[i]>=1 && f[i]!=0) cnt++;
    }
    
    return cnt;
}