int lengthOfLastWord(char* s) {
    int i;
    int cnt=0;
    int len=strlen(s)-1;
    for(i=len;i>=0;i--){
        if(s[i]!=' ') cnt++;
        else if(cnt>0) break;
    }
    return cnt;
}