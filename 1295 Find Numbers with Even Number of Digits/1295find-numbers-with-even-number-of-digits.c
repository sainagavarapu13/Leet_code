int Sum(int n){
    int sum=0;
    while(n!=0){
        sum++;
        n=n/10;
    }
   if(sum%2==0) return 1;
   else return 0;
}
int findNumbers(int* a, int n) {
    int cnt=0;
    for(int i=0;i<n;i++){
        if(Sum(a[i])){
            cnt++;
        }
    }
    return cnt;
}