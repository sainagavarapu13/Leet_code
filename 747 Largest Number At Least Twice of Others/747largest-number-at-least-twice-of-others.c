int dominantIndex(int* a, int n) {
    int i,max=-1,idx;
    for(i=0;i<n;i++){
        if(a[i]>max)
       { max=a[i];
        idx=i;}
    }
   // printf("%d %d",max,idx);
  for(i=0;i<n;i++){
    if(a[i]==max) continue;
    else{
        a[i]=2*a[i];
    }
  }
  int om=-1;
  for(i=0;i<n;i++){
    if(a[i]>om)
        om=a[i];
  }
  if(om==max) return idx;
  else return -1;
}