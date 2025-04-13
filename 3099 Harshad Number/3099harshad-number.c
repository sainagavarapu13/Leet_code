int sumOfTheDigitsOfHarshadNumber(int x) {
    int c = x,d=0,e;
    while(c>0){
        d = d+c%10;
        c/=10;
    }
    if(x%d==0) return d;
    else return -1;
}