int maximum69Number (int n) {
     int a[5];
    int k =0;
    while(n!=0){
        a[k++] = n%10;
         n/=10;
} for(int i=k-1;i>=0;i--){
    if(a[i]==6){
        a[i]=9;
        break;
    }

}
n=0;
while(k--){
    n=n*10+a[k];
}
return n;
}