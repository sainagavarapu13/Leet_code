/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int c = 0,A[nums1Size],i=0,k=0;
    while(i<nums1Size){
        int c = nums1[i];
        int b = 0,j=0;
        while(j<nums2Size){
            if(c==nums2[j]){
                b++;
                nums2[j] = -1;
            }
            j++;
        }
        if(b>0){
            A[k] = c; 
            k++;
        }
        i++;
    }
    *returnSize = k;
    int* ptr = (int*)malloc(k*sizeof(int));
    int b=0;
    while(b<k){
        ptr[b++] = A[b];
    }
    return ptr;
}