void MERGE(int a[],int n,int start,int mid,int  end){
    int i=start;
    int j=mid+1;
    int b[n];
    int k=0;
    while(i<=mid&&j<=end){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }
        else b[k++]=a[j++];
    }
    while(i<=mid) b[k++]=a[i++];
    while(j<=end) b[k++]=a[j++];
    	k=0;
	//returning elements back into original array
	for(i=start;i<=end;i++){
		a[i]=b[k++];
	}
}
void mergesort(int a[],int n,int start,int end){
    if(start==end) return;
    int mid=(start+end)/2;
    mergesort(a,n,start,mid);
      mergesort(a,n,mid+1,end);
      MERGE(a,n,start,mid,end);
}
int maximumGap(int* a, int n) {
    if(n<2) return 0;
    if(n==2) return abs(a[0]-a[1]);
    mergesort(a,n,0,n-1);
    int diff[n-1];
    int i;
    int k=0;
    int max=-1;
    for(i=0;i<n-1;i++){
        diff[i]=abs(a[k]-a[k+1]);
        if(diff[i]>max)
       max=diff[i];
        k++;
    }
   return max;
}