int trailingZeroes(int n) {
    int k=1,cnt=0;
    while(1){
        int p=pow(5,k);
        int ans=n/p;
        if(ans==0){
            break;
        }
        cnt+=ans;
        k++;
    }
    return cnt;
}