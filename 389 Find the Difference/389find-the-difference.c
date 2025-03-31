char findTheDifference(char* s, char* t) {
char result = 0; 
    while (*s != '\0') {
        result ^= *s;
        s++;
    }
    while (*t != '\0') {
        result ^= *t;
        t++;
    }
    
    return result;
}