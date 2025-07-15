int minSteps(char* s, char* t) {
    int i,a=0,A[26]={0},b[26]={0};
    for(i=0;s[i]!='\0';i++){
        A[s[i]-'a']++;
        b[t[i]-'a']++;
    }
    for(i=0;i<26;i++){
        a = a+abs(A[i]-b[i]);
    }
    return a/2;
}