int majorityElement(int* a, int n) {
    int candidate = -1, count = 0;

    // Phase 1: Find the candidate element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = a[i];
            count = 1;
        } else if (a[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify the candidate (optional, for safety)
    count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1;  // No majority element
    }
}
