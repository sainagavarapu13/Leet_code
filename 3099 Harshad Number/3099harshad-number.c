int sumOfTheDigitsOfHarshadNumber(int x) {
    int t=x;
    int sum=0;
    while(x!=0){
        int k=x%10;
        sum+=k;
        x=x/10;
    }
    if(t%sum==0) return sum;
    else return -1;
}