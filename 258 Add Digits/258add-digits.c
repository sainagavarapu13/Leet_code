
int addDigits(int a) {
    int sum=0;
    while(a){
        sum+=a%10;
        a/=10;
    }
        if( sum<10) return sum;
        return addDigits(sum);
}