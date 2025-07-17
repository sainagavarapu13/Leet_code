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

void mergesort(int a[], int n, int start, int end) {
    if (start >= end) return;
    
    int mid = (start + end) / 2;
    mergesort(a, n, start, mid);
    mergesort(a, n, mid + 1, end);
    Merge(a, start, mid, end, n);
}

int countPairs(int* a, int n, int t) {
    mergesort(a, n, 0, n - 1);
    
    int count = 0;
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        if (a[left] + a[right] < t) {
            
            count += right - left;
            left++;
        } else {
            right--;
        }
    }
    
    return count;
}