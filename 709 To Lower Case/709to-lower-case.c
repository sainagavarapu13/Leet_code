#include<ctype.h>
char* toLowerCase(char* s) {

    for(int i=0;s[i]!='\0';i++){
        s[i]= tolower((unsigned char)s[i]);
    }
    return s;
}