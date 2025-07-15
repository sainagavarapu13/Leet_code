bool isValid(char* s) {
    int a[3]={0};
    int cnt =0;
    if( strlen(s)<3) return false;
    for( int i=0;s[i]!='\0';i++){
        
         if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') a[2]++;
         else if( (s[i] >='A' && s[i]<='Z') || (s[i] >='a' && s[i]<='z')) a[1]++;
        else if (isdigit(s[i]) ) cnt++;
      
        else a[0]++;
    }
    int flg =1;
    
    for( int i=1;i<3;i++){
        if( a[i]==0){
            flg =0;
            return false;
        }
    }
    if( a[0]==0 ) return true;
    else return false;
}