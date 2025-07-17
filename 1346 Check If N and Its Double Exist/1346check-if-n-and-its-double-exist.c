#include <stdbool.h>

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
    
    for (i = start, k = 0; i <= end; i++) {
        a[i] = b[k++];
    }
}

void mergesort(int a[], int n, int start, int end) {
    if (start >= end) return;
    
    int mid = (start + end) / 2;
    mergesort(a, n, start, mid);
    mergesort(a, n, mid + 1, end);
    Merge(a, start, mid, end, n);
}

int binary(int a[], int x, int val) {
    int low = 0, high = x - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] < val) {
            low = mid + 1;
        } else if (a[mid] == val) {
            return mid;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

bool checkIfExist(int* a, int x) {
    mergesort(a, x, 0, x - 1);
    
    for (int i = 0; i < x; i++) {
        
        int target1 = a[i] * 2;
        int target2 = (a[i] % 2 == 0) ? a[i] / 2 : -1; 
        
        int pos1 = binary(a, x, target1);
        if (pos1 != -1 && pos1 != i) return true;
        
        if (target2 != -1) {
            int pos2 = binary(a, x, target2);
            if (pos2 != -1 && pos2 != i) return true;
        }
    }
    
    return false;
}