bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int b,a;
    long long c=0;
    b = x;
    while(x>0){
        a = x%10;
        c = c*10+a;
        x=x/10;
    }
    if(c==b) return true;
    else return false;
}