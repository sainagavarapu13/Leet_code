#include <stdlib.h>

int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    *returnSize = numsSize;
    int* res = (int*)malloc(numsSize * sizeof(int));
    int x = 0;
    int y = n; 
    int k = 0;

    for (int i=0; i<n;i++) {
        res[k++] = nums[x++]; 
        res[k++] = nums[y++]; 
    }

    return res;
}