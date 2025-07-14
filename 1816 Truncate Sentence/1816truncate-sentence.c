char* truncateSentence(char* s, int k) {
    int a = 0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            a++;
        }
        if(a==k) s[i]='\0';
    }
    return s;
}