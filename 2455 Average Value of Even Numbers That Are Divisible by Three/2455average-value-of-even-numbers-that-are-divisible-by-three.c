int averageValue(int* a, int n) {
    int cnt=0,sum=0;
    for(int i=0;i<n;i++){
        if(a[i]%3==0&&a[i]%2==0){
            sum+=a[i];
            cnt++;
        }
    }
   if(cnt!=0) return sum/cnt;
   else return 0;
}