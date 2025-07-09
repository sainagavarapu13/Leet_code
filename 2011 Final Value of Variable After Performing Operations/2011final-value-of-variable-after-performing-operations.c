int finalValueAfterOperations(char** a, int n) {
    int i,j;
    int x=0;
    for(i=0;i<n;i++){
        for(j=0;a[i][j]!='\0';j++){
            if(a[i][j]=='-'){
                x=x-1;
                break;
            }
            else if(a[i][j]=='+'){
                x=x+1;
                break;
            }
        }
    }
    return x;
}