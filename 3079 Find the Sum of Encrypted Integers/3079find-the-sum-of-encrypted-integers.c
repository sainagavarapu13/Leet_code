int need(int n){
    int i,max=-1;
    int m=n;
    while(n){
        int k=n%10;
        if(k>max) max=k;
        n=n/10;
    }
    int b=0;
    while(m){
        b=b*10+max;
        m=m/10;
    }
    return b;
}
int sumOfEncryptedInt(int* a, int n) {
  int i,sum=0;
  for(i=0;i<n;i++){
    sum+=need(a[i]);
  }
  return sum;
}