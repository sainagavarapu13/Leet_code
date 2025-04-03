int tribonacci(int n) {
    int a=0,b=1,c=1,d;
    if(n==0) return 0;
    else if(n==1) return 1;
    else if(n==2) return 1;
    while(n>2){
d=a+b+c;
a=b;
b=c;
c=d;
n--;
    }
    return d;
}