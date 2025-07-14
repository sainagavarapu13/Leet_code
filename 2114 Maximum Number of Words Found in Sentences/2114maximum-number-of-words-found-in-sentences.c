int mostWordsFound(char** s, int l) {
    int max =-1;
    for( int i=0;i<l;i++){
        int cnt =0;
        for( int j=0;s[i][j]!='\0';j++){
            if( s[i][j]==' ') cnt++;
        }
        cnt++;
        if( cnt > max) max =cnt;
    }
    return max;
}