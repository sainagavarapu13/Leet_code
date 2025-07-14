int reverseDegree(char* s) {
     int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]); 
        int k = 26 - (c - 'a');
        int s = i + 1; 
        sum += k * s;
    }
    return sum;
}