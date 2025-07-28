/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int** m = (int**)malloc((rowIndex + 1) * sizeof(int*));
    
    for (int i = 0; i <= rowIndex; i++) {
        m[i] = (int*)malloc((i + 1) * sizeof(int));
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                m[i][j] = 1; 
            } else {
                m[i][j] = m[i-1][j-1] + m[i-1][j]; 
            }
        }
    }
    int* result = (int*)malloc((rowIndex + 1) * sizeof(int));
    for (int j = 0; j <= rowIndex; j++) {
        result[j] = m[rowIndex][j];
    }
    
    for (int i = 0; i <= rowIndex; i++) {
        free(m[i]);
    }
    free(m);
    
    return result;
}