void merge(int A[],int mid,int left,int right){
	int i = left;
	int j = mid+1;
	int B[right-left+1],k=0;
	while(i<=mid && j<=right){
		if(A[i]<=A[j]) B[k++] = A[i++];
		else B[k++] = A[j++];
	}
	while(i<=mid) B[k++] = A[i++];
	while(j<=right) B[k++] = A[j++];
	k = 0;
	for(i=left;i<=right;i++){
		A[i] = B[k++];
	}
}
void mergesort(int A[],int left,int right){
	if(left>=right) return;
	int mid = (left+right)/2;
	mergesort(A,left,mid);
	mergesort(A,mid+1,right);
	merge(A,mid,left,right);
}
int maximumGap(int* nums, int numsSize) {
    if(numsSize<2) return 0;
    mergesort(nums,0,numsSize-1);
    int max = 0;
    for(int i=0;i<numsSize-1;i++){
        int d = abs(nums[i]-nums[i+1]);
        if(max<d) max = d;
    }
    return max;
}