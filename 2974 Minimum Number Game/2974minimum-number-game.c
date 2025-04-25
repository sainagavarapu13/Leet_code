/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
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
int* numberGame(int* nums, int numsSize, int* returnSize) {
    mergesort(nums,0,numsSize-1);
    int *ptr =(int *)malloc(numsSize*sizeof(int));
    int c,k=0;
    if(numsSize%2==0){
        c = numsSize;
    }
    else c=numsSize-1;
    for(int i=0;i<c;i++){
        ptr[k++] = nums[i+1];
        ptr[k++] = nums[i++];
    }
    *returnSize=k;
    return ptr;
}