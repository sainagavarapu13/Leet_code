#include <stdlib.h>

int isprime(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

long long splitArray(int* a, int n) {
    long long prime = 0, non = 0;
    for (int i = 0; i < n; i++) {
        if (isprime(i)) {
            prime += a[i];
        } else {
            non += a[i];
        }
    }
    return llabs(prime - non);  // use llabs for long long absolute
}
