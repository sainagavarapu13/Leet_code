bool isPalindrome(char* s) {
    char* ch = (char*)malloc(100000*sizeof(char));
    int a=0;
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9')){
            ch[a++] = tolower(s[i]);
        }
    }
    int b=0;
    a--;
    while(b<a){
        if(ch[b]!=ch[a]) return false;
        b++;
        a--;
    }
    return true;
}