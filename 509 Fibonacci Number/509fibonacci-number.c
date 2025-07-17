int fibno(int n){
    if(n<=1) return n;
    else return fibno(n-2)+fibno(n-1);
}
int fib(int n){
    return fibno(n);
}