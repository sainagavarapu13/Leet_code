
bool isUgly(int n) {
   
    if (n <= 0) return false;  // Ugly numbers are positive
    // Divide the number by 2, 3, and 5 until it cannot be divided further
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;
    
    // If the number becomes 1, it's an ugly number, otherwise it's not
    return n == 1;
 }