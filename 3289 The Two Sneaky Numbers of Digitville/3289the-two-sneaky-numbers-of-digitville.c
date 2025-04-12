/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2;
    int *rs = (int *)malloc(2*sizeof( int));
     int max =nums[0];
    for( int i=0;i<numsSize;i++){
        if( nums[i]>max) max = nums[i];
    }
    int f[max+1];
    for( int i=0;i<=max;i++) f[i]=0;
    
    for( int i=0;i<numsSize;i++){
        f[nums[i]]++;
    }int k=0;
    for( int i=0;i<=max;i++){
       if( f[i] == 2 && f[i]!=0){
        rs[k]=i;
        k++;
       }
       if( k == 2){
        break;
       }
    }


    return rs;
}