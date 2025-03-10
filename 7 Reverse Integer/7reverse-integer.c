int reverse(int x){
    
long long b=0;
while(x!=0){
   long long k=x%10;
    b=b*10+k;
    x=x/10;
}
if(b<-2147483648||b>2147483648) return 0;
else return b;

}