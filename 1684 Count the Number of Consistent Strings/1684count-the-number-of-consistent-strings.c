
int ispre(char ch,char *s){
    int i,cnt=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==ch) return 1;

    }
    return 0;
}
int countConsistentStrings(char * b, char ** a, int n){
int i,j;
int cnt,sum=0;
    for(i=0;i<n;i++){
            cnt=0;
    for(j=0;a[i][j]!='\0';j++){
        if(ispre(a[i][j],b))
        cnt++;
        }
        if(cnt==strlen(a[i])){
            sum++;
        }
    }
    return sum;
}