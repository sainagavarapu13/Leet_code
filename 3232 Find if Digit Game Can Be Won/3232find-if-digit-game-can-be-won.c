int digi(int n){
    int cnt=0;
    while(n!=0){
    cnt++;
    n=n/10;
    }
    return cnt;
 }
bool canAliceWin(int* a, int n) {
    int sum1=0,sum2=0;
  int i;
  for(i=0;i<n;i++){
    if(digi(a[i])==1){
        sum1+=a[i];
    }
    else{
        sum2+=a[i];
    }
  }
  if(sum1==sum2) return 0;
  else return 1;
}