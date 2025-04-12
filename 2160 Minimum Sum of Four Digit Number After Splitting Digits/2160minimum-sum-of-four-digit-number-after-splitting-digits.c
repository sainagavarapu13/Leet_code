#include <stdlib.h>

int minimumSum(int num) {
    int d[4];
    d[0] = num / 1000;           
    d[1] = (num / 100) % 10;    
    d[2] = (num / 10) % 10;      
    d[3] = num % 10;            

   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (d[j] > d[j + 1]) {
                
                int temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }
    int new1 = d[0]*10 + d[2];
    int new2 = d[1] * 10+d[3];

    return new1 + new2;
}