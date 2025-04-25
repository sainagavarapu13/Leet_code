int countDigits(int n) {
    int t=n;
    int cnt=0;
    while(n!=0){
        int k=n%10;
        if(t%k==0){
            cnt++;
        }
        n=n/10;
    }
    return cnt;
}