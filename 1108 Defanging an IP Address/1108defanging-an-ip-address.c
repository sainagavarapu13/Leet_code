#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* defangIPaddr(const char* a) {
    int len = strlen(a);
    // Max size = original length + 2 extra chars for each '.' (i.e., 3 chars total instead of 1)
    char* b = (char*)malloc(len * 3 + 1);
    int p = 0;

    for (int i = 0; i < len; i++) {
        if (a[i] != '.') {
            b[p++] = a[i];
        } else {
            b[p++] = '[';
            b[p++] = '.';
            b[p++] = ']';
        }
    }

    b[p] = '\0';
    return b;
}
