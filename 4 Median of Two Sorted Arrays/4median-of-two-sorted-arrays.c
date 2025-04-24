double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i= 0;
    int j = 0,k=0;
    int B[nums1Size+nums2Size];
    while(i<nums1Size && j<nums2Size){
        if(nums1[i]<nums2[j]) B[k++] = nums1[i++];
        else B[k++] = nums2[j++];
    }
    double d;
    while(i<nums1Size) B[k++] = nums1[i++];
    while(j<nums2Size) B[k++] = nums2[j++];
    if(k&1==1)  d = B[(k/2)]*1.0;
    else  d = (B[k/2] + B[(k/2)-1])/2.0;
    return d;
}