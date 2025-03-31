/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    *returnSize = 2;
    double *ptr = (double*)malloc(2*sizeof(double));
    double c= celsius + 273.15 ;
    double d = celsius * 1.80 +32.00;
    ptr[0] = c;
    ptr[1] = d;
    return ptr;
}