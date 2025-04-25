void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
char* maximumOddBinaryNumber(char* s) {
    int o=0,z=0;
    for( int i=0;s[i]!=0;i++){
        if( s[i]=='1')o++;
        else z++;
    }
    s[0]='1';
    o--;
    int k=1;
    for(int i=1;s[i]!='\0' && z!=0;i++) {
        s[i]='0';
        z--;
        k++;
    } 
    while(o!=0){
        s[k++]='1';
        o--;
    } 
   reverseString(s);
    return s;
}