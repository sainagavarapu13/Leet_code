

int isSymmetric(int m) {
    int digits[10]; // assuming max 10 digits
    int cnt = 0, sum = 0;

    int temp = m;
    while (temp > 0) {
        digits[cnt++] = temp % 10;
        temp /= 10;
    }

    if (cnt % 2 != 0)
        return 0; // must be even number of digits

    int half = cnt / 2;
    int leftSum = 0, rightSum = 0;

    // digits are stored in reverse order
    for (int i = 0; i < half; i++)
        rightSum += digits[i];

    for (int i = half; i < cnt; i++)
        leftSum += digits[i];

    return leftSum == rightSum;
}

int countSymmetricIntegers(int low, int high) {
    int count = 0;
    for (int i = low; i <= high; i++) {
        if (isSymmetric(i)) {
            count++;
            printf("Symmetric number: %d\n", i);
        }
    }
    return count;
}


