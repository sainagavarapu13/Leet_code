void reverse(char *ch, int left, int right) 
{
    while (left < right) {
        char temp = ch[left];
        ch[left] = ch[right];
        ch[right] = temp;
        left++;
        right--;
    }
}
char* finalString(char* s) {
    int l = strlen(s),a=0;
    char* ch = (char*)malloc(101*sizeof(char));
    for(int i=0;s[i]!='\0';i++){
        ch[a++] = s[i];
        if(ch[a-1]=='i') {
            reverse(ch,0,a-2);
            a--;
        }
    }
    if(a==l) return s;
    ch[a] = '\0';
    return ch;
}