bool isAcronym(char** a, int n, char* s) {
    int i,l=0;
    char w[n+1];
    for(i=0;i<n;i++){
        w[l++]=a[i][0];
    }
    w[l]='\0';
    if(strcmp(w,s)==0) return 1;
    else return 0;
}