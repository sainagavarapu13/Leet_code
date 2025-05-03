int findPermutationDifference(char* s, char* t) {
    int f[26] = {0};
    int sum=0;
    for( int i=0;s[i]!='\0';i++) f[s[i]-'a']=i;
    for( int i=0;t[i]!='\0';i++){
        sum+=abs(f[t[i]-'a']-i);
    }
    return sum;
    
}