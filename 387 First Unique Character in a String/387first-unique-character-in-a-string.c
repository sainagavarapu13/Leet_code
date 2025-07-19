int firstUniqChar(char* s) {
    int freq[26] = {0},i;
    for(i=0;s[i]!='\0';i++){
        freq[s[i]-'a']++;
    }
    for(i=0;s[i]!='\0';i++){
        if(freq[s[i]-'a']==1) return i;
    }
    return -1;
}