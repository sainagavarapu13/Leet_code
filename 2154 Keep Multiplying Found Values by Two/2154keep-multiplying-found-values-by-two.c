#include <stdlib.h>

// Improved binary search that returns 1 if found, 0 otherwise
int binary(int x, int a[], int val) {
    int low = 0;
    int high = x - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Prevents overflow
        
        if (a[mid] < val) {
            low = mid + 1;
        } else if (a[mid] == val) {
            return 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}

// Merge function remains the same
void Merge(int a[], int start, int mid, int end, int n) {
    int i = start;
    int j = mid + 1;
    int b[end - start + 1];
    int k = 0;
    
    while (i <= mid && j <= end) {
        if (a[i] < a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }
    
    while (i <= mid) b[k++] = a[i++];
    while (j <= end) b[k++] = a[j++];
    
    for (i = start, k = 0; i <= end; i++, k++) {
        a[i] = b[k];
    }
}

// Merge sort function remains the same
void mergesort(int a[], int n, int start, int end) {
    if (start >= end) return;
    
    int mid = (start + end) / 2;
    mergesort(a, n, start, mid);
    mergesort(a, n, mid + 1, end);
    Merge(a, start, mid, end, n);
}

int findFinalValue(int* a, int x, int o) {
    mergesort(a, x, 0, x - 1);
    
    while (1) {
        int found = binary(x, a, o);
        if (!found) {
            return o;
        }
        o *= 2;
    }
}