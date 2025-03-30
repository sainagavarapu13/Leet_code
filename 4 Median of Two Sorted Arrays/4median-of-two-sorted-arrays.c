double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i=0,j=0,k=0;
    float  median;
    int c[nums1Size+nums2Size];
    while(i<nums1Size && j<nums2Size ){
        if( nums1[i]>nums2[j]) c[k++]=nums2[j++];
        else c[k++]= nums1[i++];
    }
    while(i<nums1Size) c[k++]=nums1[i++];
    while(j<nums2Size) c[k++]= nums2[j++];
    if( (nums1Size+nums2Size)%2!=0){
        int l = ((nums1Size+nums2Size)+1)/2;
        median = c[l-1];
    }else{
        int l= (nums1Size+nums2Size)/2;
        int h = ((nums1Size+nums2Size)+2)/2;
        median = (c[l-1]+c[h-1])/2.0;
    }
    return median;
}