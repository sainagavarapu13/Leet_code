int ispre(char *s,char k){
    int i,cnt=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==k) {
            if(cnt==2) break;
            cnt++;
        }
    }
    return cnt;
}
int firstUniqChar(char* s) {
    int i;
    for(i=0;s[i]!='\0';i++){
        if(ispre(s,s[i])==1){
            return i;
        }
    }
    return -1;
}