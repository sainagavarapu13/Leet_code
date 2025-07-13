int set(int a){
    int cnt=0;
    while(a){
        if(a%2==1) {
            cnt++;
        }
        a=a/2;
    }
    return cnt;
}
int sumIndicesWithKSetBits(int* a, int n, int k) {
    int i;
    int sum=0;
    for(i=0;i<n;i++){
        if(set(i)==k){
            sum+=a[i];
        }
    }
    return sum;
}