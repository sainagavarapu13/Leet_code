bool check(char* word,int fre[]){
    for(int i=0;word[i];i++){
        int c = word[i] - 'a';
        if(fre[c]==0){
            return false;
        }
    }
    return true;
}
int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int fre[26] ={0},cnt = 0;
    for(int i=0;allowed[i]!='\0';i++){
        fre[allowed[i]- 'a']++;
    }
    for(int i=0;i<wordsSize;i++){
        if(check(words[i],fre)){
            cnt++;
        }
    }
    return cnt;
}