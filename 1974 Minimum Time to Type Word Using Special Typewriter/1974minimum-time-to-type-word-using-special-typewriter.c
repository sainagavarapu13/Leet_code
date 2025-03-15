int minTimeToType(char* word) {
    int b=strlen(word);
    char ch = 'a';
    int c=0,i=0;
    if(b==0) return 0;
    if(b==1) {
        int d = abs(word[0] - ch);
        if(d>13) return 26-d;
        else if(word[0]=='a') return 1;
        else return d +1;
    }
    int e = abs(word[i]-ch);
    if(e>13) c = c+ 26-e;
    else c = e;
    while(word[i+1]!='\0'){
        int d = abs(word[i]-word[i+1]);
        if(d>13) c = c + 26-d;
        else c = c + d;
        i++;
    }
    return c+b;

}