char* maximumOddBinaryNumber(char* s) {
    int c1=0,c0=0,k=0,len=0;
    for(int i=0;s[i]!='\0';i++){
        len++;
        if(s[i]=='0') c0++;
        else c1++;
    }
    while(c1>1){
        s[k++]='1';
        c1--;
    }
   
   
    while(c0!=0){
        s[k++]='0';
       c0--;
    }
    s[k]='1';
    return s;
  
}