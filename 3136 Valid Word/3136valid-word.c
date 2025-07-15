int issym(char ch){
    if(ch=='@'||ch=='#'||ch=='$') return 1;
    else return 0;
}
int iscon(char s){
if((s>='a'&&s<='z')||(s>='A'&&s<='Z')) return 1;
else return 0;
}
int isvol(char s){
    int i;
    
        if(s=='a'||s=='A'||s=='e'||s=='E'||s=='i'||s=='I'||s=='o'||s=='O'||s=='u'||s=='U') return 1;
        else return 0;
    }

bool isValid(char* s) {
    if(strlen(s)<3) return 0;
    int i,vol=0,con=0,sym=0;
    for(i=0;s[i]!='\0';i++){
        if(isvol(s[i])) vol++;
       else if(iscon(s[i])) con++;
       else if(issym(s[i])) sym++;
    }
    printf("%d %d %d",vol,con,sym);
    if(vol>=1&&con>=1&&sym==0) return 1;
    else return 0;
}