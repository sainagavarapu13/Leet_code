int removeDuplicates(int* a, int n) {
    int i,cnt=0;
   int b[n];
   int k=0;
    for(i=0;i<n;i++){
        if(i!=n-1&&a[i]==a[i+1]) continue;
        else {
            cnt++;
            b[k++]=a[i];
        }
    }
    for(i=0;i<cnt;i++){
        a[i]=b[i];
    }
    return cnt;
   // return b;
}