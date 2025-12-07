#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

class Solution {
public:
    // Function to check if a number is prime
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    std::vector<int> sieveOfEratosthenes(int n) {
        std::vector<bool> sieve(n + 1, true);
        sieve[0] = sieve[1] = false;  // 0 and 1 are not primes
        for (int i = 2; i * i <= n; ++i) {
            if (sieve[i]) {
                for (int j = i * i; j <= n; j += i) {
                    sieve[j] = false;
                }
            }
        }
        std::vector<int> primes;
        for (int i = 2; i <= n; ++i) {
            if (sieve[i]) {
                primes.push_back(i);
            }
        }
        return primes;
    }

   
    int largestPrime(int n) {
        std::vector<int> primes = sieveOfEratosthenes(n);
        
        int largestPrimeSum = 0;
        int sum = 0;

        for (int i = 0; i < primes.size(); ++i) {
            cout<<primes[i]<<" ";
            sum += primes[i];  
            if (sum > n) break;  

            if (isPrime(sum)) {
                largestPrimeSum = sum; 
            }
        }

        return largestPrimeSum;
    }
};


