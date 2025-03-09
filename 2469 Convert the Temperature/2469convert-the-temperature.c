#include <stdlib.h> // For malloc

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double Celsius, int* returnSize) {
    // Allocate memory for two doubles (Kelvin and Fahrenheit)
    double* result = (double*)malloc(2 * sizeof(double));
    
    if (result == NULL) {
        *returnSize = 0;
        return NULL;  // Return NULL if malloc fails
    }

    // Convert Celsius to Kelvin and Fahrenheit
    result[0] = Celsius + 273.15;
    result[1] = Celsius * 1.80 + 32.00;
    
    *returnSize = 2;  // Set returnSize to 2 (since we're returning 2 values)
    
    return result;  // Return the pointer to the result array
}
