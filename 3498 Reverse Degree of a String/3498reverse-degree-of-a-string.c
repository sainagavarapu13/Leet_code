int reverseDegree(char* s) {
    int ans=0;
    int i;
    for(i=0;s[i]!='\0';i++){
        int c=s[i]-'a';
        printf("%d ",c);
        ans+=(i+1)*(26-c);
    }
    return ans;
}