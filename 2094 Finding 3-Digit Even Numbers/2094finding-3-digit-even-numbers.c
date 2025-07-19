/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findEvenNumbers(int* digits, int digitsSize, int* returnSize) {
    int frequency[10] = {0};
    for (int i = 0; i < digitsSize; i++) {
        frequency[digits[i]]++;
    }
    int* result = malloc(450 * sizeof(int));
    *returnSize = 0;
    for (int i = 1; i <= 9; i++) {
        if (frequency[i] > 0) {
            for (int j = 0; j <= 9; j++) {
                if ((i != j && frequency[j] > 0) || frequency[j] > 1) {
                    for (int k = 0; k <= 9; k+=2) {
                        if ((i != k && j != k && frequency[k] > 0) ||
                            ((i != k || j != k) && frequency[k] > 1) ||
                            frequency[k] > 2) {
                            result[(*returnSize)++] = 100 * i + 10 * j + k;
                        }
                    }
                }
            }
        }
    }
    return result;
}