int fun(int i){
    int cnt=0;
        while(i){
            if( i%2==1) cnt++;
            i/=2;
        }
    return cnt;
}
int sumIndicesWithKSetBits(int* a, int x, int k) {
    long long sum=0;
    for( int i=0;i<x;i++){
        
        if( fun(i)==k) sum+=a[i];
    }
    return sum;
    
}