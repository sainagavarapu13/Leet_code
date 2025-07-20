bool arrayStringsAreEqual(char** a, int n, char** b, int m) {
    char s1[1001];
    char s2[1001];
    int i,j,k=0;
    for(i=0;i<n;i++){
        for(j=0;a[i][j]!='\0';j++){
        s1[k++]=a[i][j];
        }
    }
    k=0;
    for(i=0;i<m;i++){
        for(j=0;b[i][j]!='\0';j++){
        s2[k++]=b[i][j];
        }
    }
    if(strcmp(s1,s2)==0) return 1;
    else return 0;
}