bool isPalindrome(int x) {
    long long b=0,y=x;
    while(x!=0){
        int k=x%10;
        b=b*10+k;
        x=x/10;
    }
    if(y==b&&b>=0) return 1;
    else return 0;
}