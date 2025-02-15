int trap(int* arr, int n) {
	int leftMax=0,rightMax=0,k=0,left=0,right=n-1;
    while(left<=right){
        if(arr[left]<=arr[right]){
            if(arr[left]>=leftMax) leftMax=arr[left];
            else k+=leftMax-arr[left];
            left++;
        }
        else{
            if(arr[right]>=rightMax) rightMax=arr[right];
            else k+=rightMax-arr[right];
            right--;
        }
    }
    return k;
}