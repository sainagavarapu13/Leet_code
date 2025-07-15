int* pivotArray(int* nums, int n, int pivot, int* returnSize) {
    int totalPivot = 0;
    int idx = 0;
    int* ans = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        if (nums[i] < pivot)
            ans[idx++] = nums[i];
        else if (nums[i] == pivot)
            totalPivot++;
    }
    for (int i = 0; i < totalPivot; i++) {
        ans[idx++] = pivot;
    }
    for (int i = 0; i < n; i++) {
        if (nums[i] > pivot)
            ans[idx++] = nums[i];
    }
    *returnSize = n;
    return ans;
}