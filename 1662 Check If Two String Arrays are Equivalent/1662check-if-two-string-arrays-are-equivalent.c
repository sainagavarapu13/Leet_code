bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char A[1000001],B[1000001];
    int i,j,a=0,b=0;
    for(i=0;i<word1Size;i++){
        for(j=0;word1[i][j]!='\0';j++){
            A[a++] = word1[i][j];
        }
    }
    A[a] = '\0';
    for(i=0;i<word2Size;i++){
        for(j=0;word2[i][j]!='\0';j++){
            B[b++] = word2[i][j];
        }
    }
    B[b] = '\0';
    if(a!=b) return false;
    for(i=0;i<a;i++){
        if(A[i]!=B[i]) return false;
    }
    return true;
}