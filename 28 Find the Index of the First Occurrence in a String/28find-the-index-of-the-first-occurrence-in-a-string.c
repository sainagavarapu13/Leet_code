int strStr(char* h, char* n) {
    int a = strlen(h);
    int b = strlen(n);
    int c=0;
    for(int i=0;i<=(a-b);i++){
        int j;
            for(j = 0;n[j]!='\0';j++){
                if(h[i+j]!=n[j]) break;
            }
        if(j==b) return i;
    }
    return -1;
}