int lengthOfLastWord(char* s) {
    int a = strlen(s);
    if(a==0) return 0;
    int i,b=0,c=0;
    a--;
    for(i=a;;i--){
        if(s[i]!=' '){
            c = 1;
            b++;
        }
        if(c==1 && (s[i]==' ' || i==0)) return b;
    }
}