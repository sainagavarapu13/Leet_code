int mostWordsFound(char** sentences, int sentencesSize) {
    int min=0;
    for(int i=0;i<sentencesSize;i++){
        int a=0;
        for(int j=0;sentences[i][j]!='\0';j++){
            if(sentences[i][j]==' ') a++;
        }
        if(min<a) min = a;
    }
    return min+1;
}