int prefixCount(char** a, int n, char* k) {
    int i,j,cnt,ar=0,l;
    for(i=0;i<n;i++){
        cnt=0;
        l=0;
        for(j=0;a[i][j]!='\0';j++){
            if((k[l]!='\0')&&(a[i][j]==k[l++])){
                cnt++;
            }
        }
        if(cnt==strlen(k)){
            ar++;
        }
    }
    return ar;
}