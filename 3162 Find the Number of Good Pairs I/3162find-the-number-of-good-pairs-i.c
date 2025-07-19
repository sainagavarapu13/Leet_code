int numberOfPairs(int* nums1, int nums1Size, int* nums2, int nums2Size, int k) {
    int cnt=0,i,j;
    for(i=0;i<nums1Size;i++){
        for(j=0;j<nums2Size;j++){
            if(nums1[i]%(nums2[j]*k)==0) cnt++;
        }
    }
    return cnt;
}