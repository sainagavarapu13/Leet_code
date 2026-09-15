int isp(int x) {
    if (x <= 1) return 0;  
    if (x == 2) return 1;  
    if (x % 2 == 0) return 0; 
    
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int diagonalPrime(int** m, int x, int* y) {
    int max = 0;
    
    for (int i = 0; i < x; i++) {
     
        if (i < y[i]) {  
            int num = m[i][i];
            if (isp(num) && num > max) {
                max = num;
            }
        }
        
        int j = x - 1 - i;
        if (j >= 0 && j < y[i]) {  
            int num = m[i][j];
            if (isp(num) && num > max) {
                max = num;
            }
        }
    }
    
    return max;
}