int sumOfTheDigitsOfHarshadNumber(int n) {
    int temp =n;
    int sum=0;
    while( n!=0){
        sum+=n%10;
        n/=10;
    }
    if( temp%sum==0) return sum;
    else return -1;
}