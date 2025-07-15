int minSteps(char* s, char* t) {
    int a[27]={0};
    int b[27] = {0},cnt=0;
    for( int i=0;s[i]!='\0';i++){
        a[s[i]-'a']++;
        b[t[i]-'a']++;
    }
    for( int i=0;i<27;i++){
        if( a[i]-b[i] >0 )cnt+=a[i]-b[i];
       
    }
    return cnt;
}