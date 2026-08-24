/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void Merge (int a[],int start ,int mid,int end,int n){
	int i=start;
	int j=mid+1;
	int b[n];
	int k=0;
	//getting elements into other array in order
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
	//getting remaining elements into array
	while(i<=mid) b[k++]=a[i++]; 
	while(j<=end) b[k++]=a[j++]; 
	k=0;
	//returning elements back into original array
	for(i=start;i<=end;i++){
		a[i]=b[k++];
	}
}
void mergesort(int a[],int n,int start,int end){
	//base case
	if(start==end) return;
	//array breaking into two parts
	int mid=(start+end)/2;
	//breaking first part until subarray is one element
	mergesort(a,n,start,mid);
	//second part 
	mergesort(a,n,mid+1,end);
	// merging recusion call
	Merge(a,start,mid,end,n);
}
int* singleNumber(int* a, int n, int* returnSize) {
    int *res=(int*)malloc(2*sizeof(int));
    * returnSize=2;
   mergesort(a,n,0,n-1);
   int i,k=0;
   for(i=0;i<n;i++){
    if(i==0){
    if(a[i]!=a[i+1]) {
        res[k++]=a[i];
    
    }
    }
    else if(i==n-1&&a[i]!=a[i-1]){
        res[k++]=a[i];
    }
    else if (i>0&&i<(n-1)){
        if(a[i]!=a[i-1]&&a[i]!=a[i+1]){
            res[k++]=a[i];
        }
    }
   
   
}
 return res;
}