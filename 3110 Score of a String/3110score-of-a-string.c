int scoreOfString(char* s) {
    int d = 0,i=0;
    while(s[i+1]!='\0'){
        d = d + abs(s[i]-s[i+1]);
        i++;
    }
    return d;
}