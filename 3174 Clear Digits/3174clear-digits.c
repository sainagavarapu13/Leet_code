char* clearDigits(char* s) {
    int n = strlen(s),k=0;
    char *ch = (char*)malloc(101*sizeof(char));
    for(int i=n-1;i>=0;i--){
        if(s[i]=='.') continue;
        if(s[i]>='0'&&s[i]<='9'){
            for(int j=i-1;j>=0;j--){
                if(s[j]>='a' && s[j]<='z'){
                    s[j] = '.';
                    s[i] = '.';
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='.') continue;
        ch[k++] = s[i];
    }
    ch[k] = '\0';
    return ch;
}