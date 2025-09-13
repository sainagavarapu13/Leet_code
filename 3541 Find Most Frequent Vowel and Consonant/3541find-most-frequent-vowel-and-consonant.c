int maxFreqSum(char* s) {
    int a[26]={0};
    int b[26]={0};
    for( int i=0;s[i]!='\0';i++){
        if( s[i]=='a'|| s[i]=='e'||s[i]=='i' || s[i] =='o' || s[i]=='u' ){
            a[s[i]-'a']++;
        }else b[s[i]-'a']++;
    }
    int v =-1 , c=-1;
    for( int i=0;i<26;i++){
        if( v < a[i]) v =a[i];
        if( c<b[i]) c= b[i];
    }
   return v+c;
}