int* searchRange(int* a, int n, int k, int* returnSize) {
    int *result = (int*)malloc(2 * sizeof(int)); // allocate memory for the result array
    *returnSize = 2; // The result will always be a pair of values (start, end)

    // Find the first occurrence of k
    int left = -1, right = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            left = i;
            break;  // First occurrence found, break the loop
        }
    }

    // If no occurrence is found, return [-1, -1]
    if (left == -1) {
        result[0] = -1;
        result[1] = -1;
        return result;
    }

    // Find the last occurrence of k
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == k) {
            right = i;
            break;  // Last occurrence found, break the loop
        }
    }

    // Set the result with the first and last positions
    result[0] = left;
    result[1] = right;
    
    return result;
}