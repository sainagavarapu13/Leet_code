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
int ispre(int a[],int n,int k){
    int i;
    int low=0;
    int high=n-1;
  while(low<=high){
    int mid=(low+high)/2;
    if(a[mid]==k) {
        return 1;
        break;
    }
    else if(k<a[mid]){
        high=mid-1;
    }
    else low =mid+1;
  }
  return 0;
}
int firstMissingPositive(int* nums, int n) {
    int a=1;
    mergesort(nums,n,0,n-1);
        while(1){
        if(ispre(nums,n,a)){
            a++;
        }
        else return a;
    }
    return 0;
}