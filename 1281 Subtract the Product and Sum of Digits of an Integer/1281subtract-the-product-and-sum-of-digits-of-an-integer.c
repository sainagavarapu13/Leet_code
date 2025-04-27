int subtractProductAndSum(int n) {
    int p=1;
    int sum=0;
    while(n!=0){
        int k=n%10;
        sum+=k;
        p=p*k;
        n=n/10;
    }
    int ans=p-sum;
    return ans;
}