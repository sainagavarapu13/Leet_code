int removeElement(int* a, int n, int k) {
    if(n==0) return 0;
    int cnt=0;
    int b[n];
      int i;
    for(i=0;i<n;i++){
        b[i]=0;
    }
    int ij=0;
  
    for( i=0;i<n;i++){
        if(a[i]!=k){
            cnt++;
            b[ij++]=a[i];
        }
    }
    while(ij<n) {
        b[ij++]=k;
    }
    for(i=0;i<n;i++){
        a[i]=b[i];
    }
    return cnt;
}