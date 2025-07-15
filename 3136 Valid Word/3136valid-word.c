bool isValid(char* word) {
    int i,a=0,b=0,c=strlen(word);
    if(c<3) return false;
    for(i=0;word[i]!='\0';i++){
        if((word[i]>='0' && word[i]<='9') || (word[i]>='A' && word[i]<='Z') || (word[i]>='a' && word[i]<='z')){
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U'){
                a++;
            }
            else if((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z')){
                b++;
            }
        }
        else{
            return false;
        }
    }
    if(a>0 && b>0) return true;
    else return false;
}