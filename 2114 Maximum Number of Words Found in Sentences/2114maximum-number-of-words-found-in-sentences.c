int mostWordsFound(char** a, int n) {
    int i,j,cnt,sec=0;
    for(i=0;i<n;i++){
        cnt=1;
        for(j=0;a[i][j]!='\0';j++){
           if(a[i][j]==' '){
            cnt++;
           }
           if(cnt>=sec){
            sec=cnt;
           }
        }
    }
    return sec;
}