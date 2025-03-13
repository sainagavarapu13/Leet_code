int minMaxDifference(int num) {
    char ch[12],cha[12],c='\0',a='\0';
    sprintf(ch,"%d",num);
    sprintf(cha,"%d",num);
    int i=0,j=0;
    for (int i = 0; ch[i] != '\0'; i++){
        if(ch[i]!='9' && c =='\0'){
            c = ch[i];
            ch[i] = '9';
        }
        else if(ch[i]==c){
            ch[i] = '9';
        }
        
    }
    int num1=atoi(ch);
    i=0;
    while(cha[i]!='\0'){
        if(cha[i]!='0'){
            a = cha[i];
            cha[i] = '0';
            break;
        }
        i++;
    }
    while(cha[i]!='\0'){
        if(cha[i]==a){
            cha[i] = '0';
        }
        i++;
    }
    int num2=atoi(cha);
    return num1-num2;
}