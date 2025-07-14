char* toLowerCase(char* s) {
   char c[100];
   int i,k=0;
    for(i=0;s[i]!='\0';i++){
       if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
    }
  
   return s;
}