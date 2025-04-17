#include <stdlib.h> // For qsort()

// Comparison function for qsort (ascending order)
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int maxCoins(int* piles, int pilesSize) {
    // Sort the piles in ascending order
    qsort(piles, pilesSize, sizeof(int), compare);

    int sum = 0;
    int n = pilesSize / 3; // Number of triplets

    // Start from the second last pile and take every second pile
    for (int i = pilesSize - 2; i >= n; i -= 2) {
        sum += piles[i];
    }

    return sum;
}