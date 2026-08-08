void merge (int a[],int n,int start ,int mid,int end){
	int i=start;
	int j=mid+1;
	int b[end-start+1];
	int k=0;
	while(i<=mid&&j<=end){
		if(a[i]<a[j]){
			b[k]=a[i];
			k++;
			i++;
		}
	else{
		b[k]=a[j];
		k++;
		j++;
		
	}}
	while(i<=mid) b[k++]=a[i++]; 
	while(j<=end) b[k++]=a[j++]; 
	k=0;
	for(i=start;i<=end;i++){
		a[i]=b[k++];
	}
}
void mergesort(int a[],int n,int start,int end){
    if(start==end) return;
    int mid=(start+end)/2;
    mergesort(a,n,start,mid);
    mergesort(a,n,mid+1,end);
    merge(a,n,start,mid,end);
}
double findMedianSortedArrays(int* a, int n, int* b, int m) {
    int A[n+m];
    int l=0;
    for(int i=0;i<n;i++){
        A[l++]=a[i];
    }
    for(int i=0;i<m;i++){
        A[l++]=b[i];
    }
    mergesort(A,n+m,0,n+m-1);
    int tot=n+m;
    if(tot%2==0) {
      
        return  (A[tot/2-1]+A[(tot)/2])/2.0;
    }
    else {
       
       }   return A[tot/2];
}