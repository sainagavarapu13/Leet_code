int countKeyChanges(char* s) {
    char sma = 'a', lag = 'A';
    int i=0,b=0;
    s[i] = tolower(s[i]);
     while(s[i+1]!='\0'){
        s[i+1] = tolower(s[i+1]);
        if(s[i]!=s[i+1]){
            b++;
        }
        i++;
     }
     return b;
}