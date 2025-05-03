

char * defangIPaddr(char * s){
    int len = strlen(s);
    int ne = len+2*3;
    int k=0;
    char *a =( char*)malloc(ne+1);
    for( int i=0;s[i]!='\0';i++){
        if( s[i]=='.'){
            a[k++] ='[';
            a[k++] ='.';
            a[k++] =']';
        }else a[k++]=s[i];
    }
    a[k]='\0';
    return a;

}