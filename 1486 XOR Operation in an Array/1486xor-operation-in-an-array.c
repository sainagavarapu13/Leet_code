int xorOperation(int n, int start) {
    int a[n],i;
    for( i=0;i<n;i++){
        a[i]=start+2*i;
    }
    int p=0;
    int ans=a[0];
   while(p<n-1){
 ans=ans^a[p+1];
    p++;
   }
   return ans;
}