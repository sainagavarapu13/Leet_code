bool isAnagram(char* s, char* t) {
    int A[26]={0},B[26]={0}, c=strlen(s),d=strlen(t);
    if(c!=d) return false;
    for(int i=0;s[i]!='\0';i++){
        A[s[i]-'a']++;
        B[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(A[i]!=B[i]) return false;
    }
    return true;
}