int Sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int countLargestGroup(int n) {
    int maxSum = 36; 
    int a[maxSum + 1]; 
    for (int i = 0; i <= maxSum; i++) {
        a[i] = 0;
    }
    
    for (int num = 1; num <= n; num++) {
        int sum = Sum(num);
        a[sum]++;
    }
    int maxSize = 0;
    for (int i = 1; i <= maxSum; i++) {
        if (a[i] > maxSize) {
            maxSize = a[i];
        }
    }
    
    int count = 0;
    for (int i = 1; i <= maxSum; i++) {
        if (a[i] == maxSize) {
            count++;
        }
    }
    
    return count;
}