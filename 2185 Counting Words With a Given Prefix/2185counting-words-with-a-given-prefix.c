int prefixCount(char** words, int wordsSize, char* pref) {
    int b=strlen(pref),c=0;
    for(int i=0;i<wordsSize;i++){
        int a = 0;
        for(int j=0;pref[j]!='\0';j++){
            if(pref[j]==words[i][j]){
                a++;
            }
            else{
                break;
            }
        }
        if(b==a) c++;
    }
    return c;
}