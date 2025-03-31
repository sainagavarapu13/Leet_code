bool isPowerOfThree(int n) {
    if(n<1) return 0;
    if(n==1) return 1;
    while(n%3==0){
        if(n/3==1) return 1;
        n/=3;
    }
    return 0;
}