char * defangIPaddr(char * address){
    char *ch = (char *)malloc(1000*sizeof(ch));
    int  k=0;
    for(int i=0;address[i]!='\0';i++){
        if(address[i]=='.'){
            ch[k++] = '[';
            ch[k++] = '.';
            ch[k++] = ']';
            continue;
        }
        ch[k++] = address[i];
    }
    ch[k] ='\0';
    return ch;
}