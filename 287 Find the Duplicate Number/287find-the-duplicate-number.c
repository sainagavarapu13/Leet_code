
int findDuplicate(int* a, int x) {
    int m = 0;
    for (int i = 0; i < x; ++i) {
        if (a[i] > m) {
            m = a[i];
        }
    }
    int* freq = (int*)calloc(m + 1, sizeof(int));
    if (freq == NULL) {
        return -1; 
    }
    for (int i = 0; i < x; ++i) {
        freq[a[i]]++;
    }
    for (int i = 1; i <= m; ++i) {
        if (freq[i] > 1) {
            free(freq);
            return i;
        }
    }
    
    free(freq);
    return -1;
}