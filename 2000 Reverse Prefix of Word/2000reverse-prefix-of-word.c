void rev(char * word,int c)
{
    for(int i=0;i<c/2+1;i++){
        char temp = word[i];
        word[i] = word[c-i];
        word[c-i] = temp;
    }
}
char* reversePrefix(char* word, char ch) {
    int c=0;
    for(int i=0;word[i]!='\0';i++){
        if(word[i]==ch){
            c = i;
            break;
        }
        //if(c==0) return word;
    }
    rev(word,c);
    if(c==0) return word;
    return word;
}