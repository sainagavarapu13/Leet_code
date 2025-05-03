char findTheDifference(char* s, char* t) {
    int ind;
    int f[26]={0};
    for(int i=0;t[i]!='\0';i++) f[t[i]-'a']++;
    for(int i=0;s[i]!='\0';i++) f[s[i]-'a']--;
    for( int i=0;i<26;i++){
        if( f[i]==1){
            ind =i;
            break;
        }
    }
    char l ='a' + ind;
    return l;
}