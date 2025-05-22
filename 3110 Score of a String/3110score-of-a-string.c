int scoreOfString(char* s) {
    int sum=0,i;
    int len=strlen(s);
    for(i=0;i<len;i++){
       if(i<len-1) sum+=abs(s[i]-s[i+1]);
    }
    return sum;
}