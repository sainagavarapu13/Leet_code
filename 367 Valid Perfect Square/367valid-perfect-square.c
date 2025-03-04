bool isPerfectSquare(long long num) {
    long long i,cnt=0;
    for(i=0;i<=num;i++){
        if(i*i==num)
        cnt++;
    }
    if(cnt>0) return 1;
    else return 0;
}