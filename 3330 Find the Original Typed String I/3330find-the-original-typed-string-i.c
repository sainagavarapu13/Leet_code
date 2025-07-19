int possibleStringCount(char* word) {
    int n = strlen(word),i,count = 1;
    for(i=1;i<n;i++){
        if(word[i]==word[i-1]) count++;
    }
    return count;
}