/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int x, int* returnSize) {
    int* rs = (int*)malloc(x * sizeof(int));
    *returnSize = x;
    
    for (int i = 0; i < x; i++) {
        int count = 0;
        for (int j = 0; j < x; j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }
        rs[i] = count;
    }
    
    return rs;
}