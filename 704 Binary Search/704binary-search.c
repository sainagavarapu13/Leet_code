int search(int* a, int n, int k) {
    int start=0;
    int end=n-1;
    if(n==1&&a[0]==k) return 0;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==k) return mid;
        else if(a[mid]>k){
            end=mid-1;
        }
        else start=mid+1;
    }
    return -1;
}