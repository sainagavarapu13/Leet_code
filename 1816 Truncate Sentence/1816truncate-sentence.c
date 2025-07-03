char* truncateSentence(char* s, int k) {
    int cnt=0;
    int i;
    static char ans[5000000];
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            cnt++;
        }
        if(cnt==k){
            break;
        }
        if(cnt!=k){
            ans[i]=s[i];
        }
    }
    ans[i]='\0';
    return ans;
}