int kthFactor(int n, int k) {
    int i,cnt=0;
    for(i=1;i<=n;i++){
    
        if(n%i==0){
            cnt++;
        }
        if(cnt==k){
           return i;
        }
    }
   return -1;
}