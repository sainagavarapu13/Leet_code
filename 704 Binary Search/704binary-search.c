int search(int* n, int x, int t) {
    int h = x-1;
    int l = 0;
    int mid;
    
    while (l <= h) {
        mid = l + (h - l) / 2; 
        if (n[mid] < t) {
            l = mid + 1;
        } else if (n[mid] == t) {
            return mid;
        } else {
            h = mid - 1;
        }
    }
    return -1;
}