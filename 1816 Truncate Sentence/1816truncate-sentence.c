char* truncateSentence(char* s, int k) {
    int cnt=0,i;
    for(  i=0;s[i]!='\0';i++){
       
            if( s[i]==' ') cnt++;
        if( cnt==k) break;
    }
    if( s[i]!='\0') s[i]='\0';
    return s;
}