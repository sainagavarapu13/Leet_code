/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int x, int k, int multiplier, int* returnSize) {
    *returnSize = x;
    int *a = (int*)malloc(x*sizeof(int));
    for( int i=0;i<x;i++){
        a[i]= nums[i];
    }while( k--){
        int min = a[0],ind=0;
        for( int i=0;i<x;i++){
                if( min > a[i]){ min = a[i];
                ind = i;
                }
        }
        a[ind] = min * multiplier;
    }

    return a;
}