int maximumLength(int* nums, int numsSize) {
    int i, j, k, result;
    int pattern_1 = 0, pattern_2 = 0, pattern_3 = 1;
    j = nums[0]%2;
    for (i=0; i< numsSize;i++) {
        k = nums[i]%2;
        if (k)
            pattern_1++;
        else
            pattern_2++;
        if (k != j) {
            j = k;
            pattern_3++;
        }
    }
    
    result = pattern_1> pattern_2 ? pattern_1: pattern_2;
    result = result > pattern_3 ? result: pattern_3;
    return result;
}